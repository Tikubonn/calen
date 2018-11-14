#include <calen.private>

/**
 * @brief setup a calen instance with argument of caltime.
 * @param (caltime) total seconds from 1/1/1 00:00:00.
 * @param (calout) setup target that will be modified.
 * @return this return an integer that is if success then 0, otherwise non-zero.
 */

int init_calen_from_time (calen_time caltime, calen *calout){
  unsigned int year;
  for (year = 1; 1; year++){
    unsigned int month;
    for (month = 1; month <= 12; month++){
      unsigned int days = calen_month_of_days(year, month);
      unsigned int dayssecond = days * DAY;
      if (caltime < dayssecond){
        return init_calen(
          year,
          month,
          caltime / DAY +1,
          caltime % DAY / HOUR,
          caltime % HOUR / MINUTE,
          caltime % MINUTE / SECOND,
          calout
        );
      }
      caltime = caltime - dayssecond;
    }
  }
}
