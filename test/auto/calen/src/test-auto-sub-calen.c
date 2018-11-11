#include <calen.h>
#include <test.h>

void test_auto_sub_calen (){

  calen *temp1;
  calen *temp2;
  calen *res;

  /* <0001/01/01 00:00:00> - <0001/01/01 00:00:00> = <0001/01/01 00:00:00> */

  test((temp1 = make_calen(1, 1, 1, 0, 0, 0)) != NULL);
  test((temp2 = make_calen(1, 1, 1, 0, 0, 0)) != NULL);
  test((res = sub_calen(temp1, temp2)) != NULL);
  test(res->year == 1);
  test(res->month == 1);
  test(res->day == 1);
  test(res->hour == 0);
  test(res->minute == 0);
  test(res->second == 0);
  free_calen(temp1);
  free_calen(temp2);
  free_calen(res);

}
