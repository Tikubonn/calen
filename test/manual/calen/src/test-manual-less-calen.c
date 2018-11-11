#include <calen.h>
#include <test.h>

void test_manual_less_calen (){
  
  calen temp1;
  calen temp2;
  
  /* case1 */
  
  test(init_calen(1, 1, 1, 0, 0, 0, &temp1) == 0);
  test(init_calen(1, 1, 1, 0, 0, 1, &temp2) == 0);
  test(less_calen(&temp1, &temp2) == true);
  
  /* case2 */
  
  test(init_calen(1, 1, 1, 0, 0, 1, &temp1) == 0);
  test(init_calen(1, 1, 1, 0, 0, 1, &temp2) == 0);
  test(less_calen(&temp1, &temp2) == false);
  
  /* case3 */
  
  test(init_calen(1, 1, 1, 0, 0, 1, &temp1) == 0);
  test(init_calen(1, 1, 1, 0, 0, 0, &temp2) == 0);
  test(less_calen(&temp1, &temp2) == false);
    
}
