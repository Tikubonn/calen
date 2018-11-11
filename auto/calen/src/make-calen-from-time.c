#include <calen.private>
#include <stdlib.h>

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
