#include <calen.h>
#include <test.h>

void test_manual_set_calen_year (){
  
  calen temp;
  
  /* case1 */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_year(0, &temp) != 0);
  test(temp.year == 1);
  
  /* case2 */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp) == 0);
  test(set_calen_year(8, &temp) == 0);
  test(temp.year == 8);

  /* <0004/02/29 00:00:00> to <0001/02/28 00:00:00> */
  
  test(init_calen(4, 2, 29, 0, 0, 0, &temp) == 0);
  test(set_calen_year(1, &temp) == 0);
  test(temp.year == 1);
  test(temp.month == 2);
  test(temp.day == 28);
  
}
