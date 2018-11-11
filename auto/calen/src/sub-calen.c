#include <calen.private>
#include <stdlib.h>

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
