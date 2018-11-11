#include <calen.h>
#include <test.h>

void test_tmp_make_calen_relative_temporary (){
  
  /* <0000/00/00 00:00:00> */
  
  make_calen_relative_temporary(temp1, 0, 0, 0, 0, 0, 0);
  test(temp1 != NULL);
  
}
