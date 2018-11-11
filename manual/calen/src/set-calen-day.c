#include <calen.private>

/**
 * @fn
 * set day to calen instance.
 * @param (day) must be between 1 to month of day.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_day (int day, calen *calout){
  if (!(1 <= day && day <= calen_month_of_days(calout->year, calout->month))){
    return 1;
  }
  calout->day = day;
  return 0;
}
