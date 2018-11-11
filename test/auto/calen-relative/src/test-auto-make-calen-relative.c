#include <calen.h>
#include <test.h>

void test_auto_make_calen_relative (){
  
  calen_relative *temp;
  
  /* <0001/01/01 00:00:00> */
  
  test((temp = make_calen_relative(0, 0, 0, 0, 0, 0)) != NULL);
  free_calen_relative(temp);
  
}
