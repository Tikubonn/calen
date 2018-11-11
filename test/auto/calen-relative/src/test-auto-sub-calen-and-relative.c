#include <calen.h>
#include <test.h>

void test_auto_sub_calen_and_relative (){
  
  calen *cal;
  calen_relative *rel;
  calen *res;
  
  /* <0002/02/02 01:01:01> - <0001/01/01 01:01:01> = <0001/01/01 00:00:00> */
  
  test((cal = make_calen(2, 2, 2, 1, 1, 1)) != NULL);
  test((rel = make_calen_relative(1, 1, 1, 1, 1, 1)) != NULL);
  test((res = sub_calen_and_relative(cal, rel)) != NULL);
  test(res->year == 1);
  test(res->month == 1);
  test(res->day == 1);
  test(res->hour == 0);
  test(res->minute == 0);
  test(res->second == 0);
  free_calen(cal);
  free_calen_relative(rel);
  free_calen(res);
  
}
