#include <calen.h>
#include <test.h>

void test_manual_sub_calen_manually (){
  
  calen temp1;
  calen temp2;
  calen res;

  /* <0001/01/01 00:00:00> - <0002/02/02 01:01:01> = error */
  
  test(init_calen(2, 2, 2, 0, 0, 0, &temp1) == 0);
  test(init_calen(2, 2, 2, 1, 1, 1, &temp2) == 0);
  test(sub_calen_manually(&temp1, &temp2, &res) != 0);
  
  /* <0002/02/02 01:01:01> - <0002/02/02 01:01:01> = <0001/01/01 00:00:00> */
  
  test(init_calen(2, 2, 2, 1, 1, 1, &temp1) == 0);
  test(init_calen(2, 2, 2, 1, 1, 1, &temp2) == 0);
  test(sub_calen_manually(&temp1, &temp2, &res) == 0);
  test(res.year == 1);
  test(res.month == 1);
  test(res.day == 1);
  test(res.hour == 0);
  test(res.minute == 0);
  test(res.second == 0);
  
  /* <0002/02/02 01:01:01> - <0001/01/01 00:00:00> = <0002/02/02 01:01:01> */
  
  test(init_calen(2, 2, 2, 1, 1, 1, &temp1) == 0);
  test(init_calen(1, 1, 1, 0, 0, 0, &temp2) == 0);
  test(sub_calen_manually(&temp1, &temp2, &res) == 0);
  test(res.year == 2);
  test(res.month == 2);
  test(res.day == 2);
  test(res.hour == 1);
  test(res.minute == 1);
  test(res.second == 1);
  
}
