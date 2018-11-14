#include <calen.private>
#define min(a,b) ((a)<(b)?(a):(b))

/**
 * @brief increase calen instance of year.
 * @detail internal routine 
 * @param (year) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __increase_calen_year (unsigned int year, calen *calio){
  calio->year += year;
  return 0;
}

/**
 * @brief increase calen instance of year.
 * @detail internal routine 
 * @param (year) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __increase_calen_month (unsigned int month, calen *calio){
  int monthsum = (calio->month -1) + month;
  if (__increase_calen_year(monthsum / 12, calio)){
    return 1;
  }
  calio->month = monthsum % 12 + 1;
  return 0;
}

/**
 * @brief increase calen instance of year.
 * @detail internal routine 
 * @param (year) must be over 0.
 * @param (calio) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

static int __adjust_calen_day (calen *calio){
  int days = calen_month_of_days(calio->year, calio->month);
  calio->day = min(calio->day, days);
  return 0;
}

/**
 * @brief add calen instance by calen_relative instance then write result to another instance.
 * @param (cal) must be valid instance that is maken by routine from this library.
 * @param (rel) must be valid instance that is maken by routine from this library.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int add_calen_and_relative_manually (calen *cal, calen_relative *rel, calen *calout){
  calen calo = *cal;
  if (__increase_calen_year(rel->year, &calo)){
    return 1;
  }
  if (__increase_calen_month(rel->month, &calo)){
    return 1;
  }
  if (__adjust_calen_day(&calo)){
    return 1;
  }
  calen_time caltime = get_calen_time(&calo);
  caltime += rel->day * DAY;
  caltime += rel->hour * HOUR;
  caltime += rel->minute * MINUTE;
  caltime += rel->second * SECOND;
  return init_calen_from_time(caltime, calout);
}
