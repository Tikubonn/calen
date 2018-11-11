#include <calen.h>
#include <test.h>

void test_auto_make_calen (){
  
  calen *temp;
  
  /* <0001/01/01 00:00:00> */
  
  test((temp = make_calen(1, 1, 1, 0, 0, 0)) != NULL);
  free_calen(temp);

}
