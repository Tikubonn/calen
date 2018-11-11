#include <calen.h>
#include <test.h>

void test_tmp_sub_calen_and_relative_temporary (){
  
  /* <0001/01/01 00:00:00> - <0000/00/00 00:00:00> = <0001/01/01 00:00:00> */
  
  {
    make_calen_temporary(temp1, 1, 1, 1, 0, 0, 0);
    test(temp1 != NULL);
    make_calen_relative_temporary(temp2, 0, 0, 0, 0, 0, 0);
    test(temp2 != NULL);
    sub_calen_and_relative_temporary(result, temp1, temp2);
    test(result != NULL);
    test(result->year == 1);
    test(result->month == 1);
    test(result->day == 1);
    test(result->hour == 0);
    test(result->minute == 0);
    test(result->second == 0);
  }
  
  /* <0002/02/02 01:01:01> + <0001/01/01 01:01:01> = <0002/02/02 01:01:01> */
  
  {
    make_calen_temporary(temp1, 2, 2, 2, 1, 1, 1);
    test(temp1 != NULL);
    make_calen_relative_temporary(temp2, 1, 1, 1, 1, 1, 1);
    test(temp2 != NULL);
    sub_calen_and_relative_temporary(result, temp1, temp2);
    test(result != NULL);
    test(result->year == 1);
    test(result->month == 1);
    test(result->day == 1);
    test(result->hour == 0);
    test(result->minute == 0);
    test(result->second == 0);
  }
  
}
