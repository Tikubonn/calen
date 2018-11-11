#include <calen.private>
#include <stdbool.h>

/**
 * @fn
 * check the year is leap year or not.
 * @param (year) must be over 1.
 * @return return checked result as boolean.
 */

static bool __uruup (int year){
  return 
    (year % 400 == 0) || 
    ((year % 4 == 0) &&
     (year % 100 != 0));
}

/**
 * @fn
 * get spent month of days by arguments.
 * @param (year) must be over 1.
 * @param (month) must be between 1 to 12.
 * @return spent month of days as calen_time type.
 */

static calen_time __spent_month_of_days (int year, int month){
  switch (month){
    case  1: return 0;
    case  2: return 31;
    case  3: return 31 + (__uruup(year) ? 29 : 28);
    case  4: return 31 + (__uruup(year) ? 29 : 28) + 31;
    case  5: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30;
    case  6: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31;
    case  7: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30;
    case  8: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30 + 31;
    case  9: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31;
    case 10: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    case 11: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    case 12: return 31 + (__uruup(year) ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    default: return 0; // undefined status.
  }
}

/**
 * @fn
 * get spent year of days by calen instance.
 * this routine optimized that calculate date as large block.
 * @param (cal) must be valid instance that is made by routine in this library.
 * @return calculated spent year of days.
 */

static calen_time __spent_year_of_days1 (calen *cal){
  calen_time caltime = 0;
  int count = (cal->year -1) / 400;
  while (count--){
    caltime += (365 * 303) + (366 * 97);
  }
  return caltime;
}

/**
 * @fn
 * get rest of days of `__spent_year_of_days1`.
 * @param (cal) must be valid instance that is made by routine in this library.
 * @return calculated spent year of days.
 */

static calen_time __spent_year_of_days2 (calen *cal){
  calen_time caltime = 0;
  int yearm = cal->year % 400;
  int year;
  for (year = 1; year < yearm; year++){
    caltime += __uruup(year) ? 366 : 365;
  }
  return caltime;
}

/**
 * @fn
 * return a total seconds between 1/1/1 00:00:00 to calen instance.
 * this trust a given argument, so this routine dont check the arguments.
 * @param (cal) must be a valid instance that be maken by routine on this library.
 * @return return total seconds as integer.
 */

calen_time get_calen_time (calen *cal){
  calen_time caltime = 0;
  caltime += __spent_year_of_days1(cal) * DAY;
  caltime += __spent_year_of_days2(cal) * DAY;
  caltime += __spent_month_of_days(cal->year, cal->month) * DAY;
  caltime += (cal->day -1) * DAY;
  caltime += cal->hour * HOUR;
  caltime += cal->minute * MINUTE;
  caltime += cal->second * SECOND;
  return caltime;
}
