#include <calen.private>

/**
 * @fn
 * set month to calen instance.
 * @param (month) must be between 1 to 12.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_month (int month, calen *calout){
  if (!(1 <= month && month <= 12)){
    return 1;
  }
  calout->month = month;
  return 0;
}
