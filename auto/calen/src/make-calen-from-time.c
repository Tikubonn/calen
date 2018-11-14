#include <calen.private>
#include <stdlib.h>

/**
 * @brief make a new `calen` instance by total seconds from zero time.
 * @param (caltime) an integer of total seconds from zero time.
 * @return return a pointer that is if success then new `calen` instance, otherwise `NULL`.
 */

calen *make_calen_from_time (calen_time caltime){
  calen temp;
  if (init_calen_from_time(caltime, &temp)){
    return NULL;
  }
  calen *calout = malloc(sizeof(calen));
  if (calout == NULL){
    return NULL;
  }
  *calout = temp;
  return calout;
}
