#include <calen.private>
#include <stdlib.h>

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
