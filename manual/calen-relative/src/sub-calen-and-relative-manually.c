#include <calen.private>
#define min(a, b) ((a)<(b)?(a):(b))

/**
 * @fn
 * decrease calen instance of year.
 * decreased instance of date was undeflowed,
 * this routine abort processing and return non-zero integer.
 * @detail internal routine 
 * @param (year) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __decrease_calen_year (unsigned int year, calen *calio){
  if (calio->year <= year){
    return 1; /* calculated result was underflowed */
  }
  calio->year -= year;
  return 0;
}

/**
 * @fn
 * decrease calen instance of month.
 * decreased instance of date was undeflowed,
 * this routine abort processing and return non-zero integer.
 * @detail internal routine 
 * @param (month) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __decrease_calen_month (unsigned int month, calen *calio){
  if (month < calio->month){
    calio->month = calio->month - month;
    return 0;
  }
  else {
    int month_all = month - calio->month;
    if (__decrease_calen_year(month_all / 12, calio)){
      return 1;
    }
    calio->month = 11 - (month_all % 12) +1;
    return 0;
  }
}

/**
 * @fn
 * decrease calen instance of day.
 * decreased instance of date was undeflowed,
 * this routine abort processing and return non-zero integer.
 * @detail internal routine 
 * @param (day) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __adjust_calen_month (calen *calio){
  int days = calen_month_of_days(calio->year, calio->month);
  calio->day = min(calio->day, days);
  return 0;
}

/**
 * @fn 
 * sub calen instance by calen_relative instance then write result to another instance.
 * @param (cal) must be valid instance that is maken by routine from this library.
 * @param (rel) must be valid instance that is maken by routine from this library.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int sub_calen_and_relative_manually (calen *cal, calen_relative *rel, calen *calout){
  calen calo = *cal;
  if (__decrease_calen_year(rel->year, &calo)){
    return 1;
  }
  if (__decrease_calen_month(rel->month, &calo)){
    return 1;
  }
  if (__adjust_calen_month(&calo)){
    return 1;
  }
  calen_time caltime = get_calen_time(&calo);
  calen_time dayssecond = rel->day * DAY;
  if (caltime < dayssecond){
    return 1;
  }
  caltime -= dayssecond;
  calen_time hourssecond = rel->hour * HOUR;
  if (caltime < hourssecond){
    return 1;
  }
  caltime -= hourssecond;
  calen_time minutessecond = rel->minute * MINUTE;
  if (caltime < minutessecond){
    return 1;
  }
  caltime -= minutessecond;
  calen_time second = rel->second * SECOND;
  if (caltime < second){
    return 1;
  }
  caltime -= second;
  return init_calen_from_time(caltime, calout);
}
