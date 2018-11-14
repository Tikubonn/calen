#include <calen.private>
#include <stdlib.h>

/**
 * @brief add calen instance by instance.
 * @param (year) must be over 1.
 * @param (month) must be between 1 to 12.
 * @param (day) must be between 1 to month of days.
 * @param (hour) must be between 1 to 23.
 * @param (minute) must be between 0 to 59.
 * @param (second) must be between 0 to 59.
 * @return return a pointer that is if success then new `calen` instance, otherwise `NULL`.
 */

calen *make_calen (unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minute, unsigned int second){
  calen temp;
  if (init_calen(year, month, day, hour, minute, second, &temp)){
    return NULL;
  }
  calen *calout = malloc(sizeof(calen));
  if (calout == NULL){
    return NULL;
  }
  *calout = temp;
  return calout;
}
