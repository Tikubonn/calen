#include <calen.private>

/**
 * @brief setup calen_relation instance with arguments.
 * @param (year) must be over 0.
 * @param (month) must be over 0.
 * @param (day) must be over 0.
 * @param (hour) must be over 0.
 * @param (minute) must be over 0.
 * @param (second) must be over 0.
 * @param (relout) target instance that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int init_calen_relative (unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minute, unsigned int second, calen_relative *relout){
  relout->year = year;
  relout->month = month;
  relout->day = day;
  relout->hour = hour;
  relout->minute = minute;
  relout->second = second;
  return 0;
}
