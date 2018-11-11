#include <calen.h>
#include <test.h>

void test_manual_set_calen_month (){
  
  calen temp;
  
  /* case1 */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_month(0, &temp) != 0);
  test(temp.month == 1);
  
  /* case2 */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_month(8, &temp) == 0);
  test(temp.month == 8);

  /* case3 */

  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_month(13, &temp) != 0);
  test(temp.month == 1);
  
  /* <0001/01/31 00:00:00> to <0001/02/28 00:00:00> */
  
  test(init_calen(1, 1, 31, 0, 0, 0, &temp) == 0);
  test(set_calen_month(2, &temp) == 0);
  test(temp.month == 2);
  test(temp.day == 28);
  
}
