#include <stdio.h>
#include <stdlib.h>

unsigned power(unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans,int test_case_number){
  unsigned ans=power(x,y);
  if (ans != expected_ans){
    printf("Failed test case %d \n",test_case_number);
    printf("Got answer %u \n",ans);
    exit(EXIT_FAILURE);
  }
}

int main(){
  run_check(0,0,1,1);
  run_check(1,1,1,2);
  run_check(2,0,1,3);
  run_check(2,2,4,4);
  run_check(-2,2,4,5);
  run_check(10,10,1410065408,6);

  return EXIT_SUCCESS;
}
