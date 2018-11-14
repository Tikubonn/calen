#include <calen.private>
#include <stdlib.h>

/**
 * @brief sub `calen` instance by `calen_relative`.
 * @param (cal) must be valid instance that is maken by this libraries routine.
 * @param (rel) must be valid instance that is maken by this libraries routine.
 * @return return a pointer that is if success then new `calen` instance, otherwise `NULL`.
 */

calen *sub_calen_and_relative (calen *cal, calen_relative *rel){
  calen temp;
  if (sub_calen_and_relative_manually(cal, rel, &temp)){
    return NULL;
  }
  calen *calout = malloc(sizeof(calen));
  if (calout == NULL){
    return NULL;
  }
  *calout = temp;
  return calout;
}
