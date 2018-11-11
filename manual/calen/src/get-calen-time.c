#include <calen.private>

/**
 * @fn
 * return a total seconds between 1/1/1 00:00:00 to calen instance.
 * this trust a given argument, so this routine dont check the arguments.
 * @param (cal) must be a valid instance that be maken by routine on this library.
 * @return return total seconds as integer.
 */

calen_time get_calen_time (calen *cal){
  calen_time caltime = 0;
  int year;
  for (year = 1; year < cal->year; year++){
    int month;
    for (month = 1; month <= 12; month++){
      int days = calen_month_of_days(year, month);
      caltime += days * DAY;
    }
  }
  int month;
  for (month = 1; month < cal->month; month++){
    int days = calen_month_of_days(cal->year, month);
    caltime += days * DAY;
  }
  caltime += (cal->day -1) * DAY;
  caltime += cal->hour * HOUR;
  caltime += cal->minute * MINUTE;
  caltime += cal->second * SECOND;
  return caltime;
}
