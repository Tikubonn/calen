#include <calen.private>

/**
 * @fn
 * set minute to calen instance.
 * @param (minute) must be between 0 to 59.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_minute (unsigned int minute, calen *calout){
  if (!(0 <= minute && minute <= 59)){
    return 1;
  }
  calout->minute = minute;
  return 0;
}
