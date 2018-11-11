#include <calen.h>
#include <test.h>

void test_tmp_make_calen_temporary (){
  
  /* case1 */
  
  {
    make_calen_temporary(temp, 0, 0, 0, 0, 0, 0);
    test(temp == NULL);
  }
  
  /* case2 */
  
  {
    make_calen_temporary(temp, 0, 13, 32, 60, 60, 60);
    test(temp == NULL);
  }
  
  /* case3 */
  
  {
    make_calen_temporary(temp, 1, 1, 1, 0, 0, 0);
    test(temp != NULL);
  }
  
}
