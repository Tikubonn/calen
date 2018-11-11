#include <calen.private>

/**
 * @fn
 * change the calen instances weekday with date increment.
 * @param (weekday) weekday as constant integer.
 * @param (calio) this instance will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int change_calen_weekday_with_increment (calen_weekday weekday, calen *calio){
  calen_weekday wday = get_calen_weekday(calio);
  if (wday == weekday){
    return 0;
  }
  else 
  if (wday < weekday){
    int difference = weekday - wday;
    calen_time caltime = get_calen_time(calio);
    return init_calen_from_time(caltime + difference * DAY, calio);
  }
  else {
    int difference = (7 - wday) + weekday;
    calen_time caltime = get_calen_time(calio);
    return init_calen_from_time(caltime + difference * DAY, calio);
  }
}
