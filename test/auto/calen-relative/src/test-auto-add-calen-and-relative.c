#include <calen.h>
#include <test.h>

void test_auto_add_calen_and_relative (){
  
  calen *cal;
  calen_relative *rel;
  calen *res;
  
  /* <0001/01/01 00:00:00> + <0001/01/01 01:01:01> = <0002/02/02 01:01:01> */
  
  test((cal = make_calen(1, 1, 1, 0, 0, 0)) != NULL);
  test((rel = make_calen_relative(1, 1, 1, 1, 1, 1)) != NULL);
  test((res = add_calen_and_relative(cal, rel)) != NULL);
  test(res->year == 2);
  test(res->month == 2);
  test(res->day == 2);
  test(res->hour == 1);
  test(res->minute == 1);
  test(res->second == 1);
  free_calen(cal);
  free_calen_relative(rel);
  free_calen(res);
  
}
