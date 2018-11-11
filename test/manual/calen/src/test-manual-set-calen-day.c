#include <calen.h>
#include <test.h>

void test_manual_set_calen_day (){
  
  calen temp;
  
  /* <0001/01/00> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(0, &temp) != 0);
  test(temp.day == 1);
  
  /* <0001/01/08> */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(1, &temp) == 0);
  test(temp.day == 1);

  /* <0001/01/31> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(31, &temp) == 0);
  test(temp.day == 31);

  /* <0001/01/32> */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(32, &temp) != 0);
  test(temp.day == 1);

  /* <02/28> not leap year */

  test(init_calen(1, 2, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(28, &temp) == 0);
  test(temp.day == 28);

  test(init_calen(1, 2, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(29, &temp) != 0);
  test(temp.day == 1);

  /* <02/29> leap year */

  test(init_calen(4, 2, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(29, &temp) == 0);
  test(temp.day == 29);

  test(init_calen(4, 2, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_day(30, &temp) != 0);
  test(temp.day == 1);
  
}
