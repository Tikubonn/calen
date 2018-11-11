#include <calen.private>

/**
 * @fn
 * set second to calen instance.
 * @param (second) must be between 0 to 59.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_second (int second, calen *calout){
  if (!(0 <= second && second <= 59)){
    return 1;
  }
  calout->second = second;
  return 0;
}
