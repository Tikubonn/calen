#include <calen.private>

/**
 * @brief setup a calen instance with arguments.
 * @param (year) must be over 1.
 * @param (month) must be between 1 to 12.
 * @param (day) must be between 1 to month of days.
 * @param (hour) must be between 0 to 23.
 * @param (minute) must be between 0 to 59.
 * @param (second) must be between 0 to 59.
 * @param (calout) setup target that will be modified.
 * @return this return an integer that is if success then 0, otherwise non-zero.
 */

int init_calen (unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minute, unsigned int second, calen *calout){
  if (!(1 <= year)) return 1;
  if (!(1 <= month && month <= 12)) return 1;
  if (!(1 <= day && day <= calen_month_of_days(year, month))) return 1;
  if (!(0 <= hour && hour <= 23)) return 1;
  if (!(0 <= minute && minute <= 59)) return 1;
  if (!(0 <= second && second <= 59)) return 1;
  calout->year = year;
  calout->month = month;
  calout->day = day;
  calout->hour = hour;
  calout->minute = minute;
  calout->second = second;
  return 0;
}
