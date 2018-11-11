#include <calen.private>

/**
 * @fn
 * change the calen instances weekday with date decrement.
 * if calculate result was underflowed, this abort processing and return non-zero integer.
 * @param (weekday) weekday as constant integer.
 * @param (calio) this instance will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int change_calen_weekday_with_decrement (calen_weekday weekday, calen *calio){
  calen_weekday wday = get_calen_weekday(calio);
  if (wday == weekday){
    return 0;
  }
  else 
  if (weekday < wday){
    int difference = wday - weekday;
    calen_time caltime = get_calen_time(calio);
    if (caltime < difference * DAY){
      return 1;
    }
    return init_calen_from_time(caltime - difference * DAY, calio);
  }
  else {
    int difference = wday - (7 - weekday);
    calen_time caltime = get_calen_time(calio);
    if (caltime < difference * DAY){
      return 1;
    }
    return init_calen_from_time(caltime - difference * DAY, calio);
  }
}
