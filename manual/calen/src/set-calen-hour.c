#include <calen.private>

/**
 * @fn
 * set hour to calen instance.
 * @param (hour) must be between 0 to 23.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_hour (unsigned int hour, calen *calout){
  if (!(0 <= hour && hour <= 23)){
    return 1;
  }
  calout->hour = hour;
  return 0;
}
