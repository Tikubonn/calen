#include <calen.private>
#include <stdlib.h>

/**
 * @brief sub calen instance by instance.
 * @param (cala) must be valid instance that is maken by this libraries routine.
 * @param (calb) must be valid instance that is maken by this libraries routine.
 * @return return a pointer that if success then new calen instance, otherwise NULL.
 */

calen *sub_calen (calen *cala, calen *calb){
  calen temp;
  if (sub_calen_manually(cala, calb, &temp)){
    return NULL;
  }
  calen *calout = malloc(sizeof(calen));
  if (calout == NULL){
    return NULL;
  }
  *calout = temp;
  return calout;
}
