#include <calen.private>
#include <stdlib.h>

/**
 * @brief make a new `calen_relative` instance by arguments.
 * @param (year) unsigned number of years.
 * @param (month) unsigned number of months.
 * @param (day) unsigned number of days.
 * @param (hour) unsigned number of hours.
 * @param (minute) unsigned number of minutes.
 * @param (second) unsigned number of seconds.
 * @return return a pointer that is if success then new `calen_relative` instance, otherwise `NULL`.
 */

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
