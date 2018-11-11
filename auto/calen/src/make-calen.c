#include <calen.private>
#include <stdlib.h>

calen *make_calen (int year, int month, int day, int hour, int minute, int second){
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
