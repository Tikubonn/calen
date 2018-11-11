#include <calen.private>

/**
 * @fn
 * set year to calen instance.
 * @param (year) must be over 1.
 * @param (calout) setup target that will be modified.
 * @return return an integer that is if success then 0, otherwise non-zero.
 */

int set_calen_year (int year, calen *calout){
  if (!(1 <= year)){
    return 1;
  }
  calout->year = year;
  return 0;
}
