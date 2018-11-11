#include <calen.private>
#include <stdlib.h>

calen_relative *make_calen_relative (unsigned int year, unsigned int month, unsigned int day, unsigned int hour, unsigned int minute, unsigned int second){
  calen_relative temp;
  if (init_calen_relative(year, month, day, hour, minute, second, &temp)){
    return NULL;
  }
  calen_relative *relout = malloc(sizeof(calen_relative));
  if (relout == NULL){
    return NULL;
  }
  *relout = temp;
  return relout;
}
