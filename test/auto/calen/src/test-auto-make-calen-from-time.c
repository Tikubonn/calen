#include <calen.h>
#include <test.h>

void test_auto_make_calen_from_time (){
  
  calen *temp;
  
  /* <0001/01/01 00:00:00> */
  
  test((temp = make_calen_from_time(0)) != NULL);
  free_calen(temp);
  
}
