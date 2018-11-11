#include <calen.private>
#include <stdlib.h>

calen *add_calen_and_relative (calen *cal, calen_relative *rel){
  calen temp;
  if (add_calen_and_relative_manually(cal, rel, &temp)){
    return NULL;
  }
  calen *calout = malloc(sizeof(calen));
  if (calout == NULL){
    return NULL;
  }
  *calout = temp;
  return calout;
}
