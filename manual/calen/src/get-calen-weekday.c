#include <calen.private>

/**
 * @brief get weekday from calen instance.
 * @param (cal) must be valid instance that is made by routine on this library.
 * @return return weekday as integer.
 */

calen_weekday get_calen_weekday (calen *cal){
  calen_time caltime = get_calen_time(cal);
  int weekday = caltime / DAY % 7;
  switch (weekday){
    case 0: return CALEN_MONDAY;
    case 1: return CALEN_TUESDAY;
    case 2: return CALEN_WEDNESDAY;
    case 3: return CALEN_THURSDAY;
    case 4: return CALEN_FRIDAY;
    case 5: return CALEN_SATURDAY;
    case 6: return CALEN_SUNDAY;
    default: return 0; // undefined status.
  }
}
