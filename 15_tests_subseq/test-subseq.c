#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(){
  int array1[9] = { 77, 33, 19, 42, 99, 99, 6, 27, 4};
  int array2[5] = {-5,-5,-4,-3,-2};
  int array3[5] = {5,5,5,5,5};
  int array4[]={2,3,4,2,3,4,5};
  int array5[]={-1,0,1};
  int array6[]={};
  if (maxSeq(array3,5)!=1){
    //printf("found error\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array1,9)!=3){
    //printf("found error\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array2,5)!=4){
    //printf("found error\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array4,7)!=4){
    //printf("found error\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array5,3)!=3){
    // printf("found error\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array6,0)!=0){
    // printf("found error\n");
    return EXIT_FAILURE;
  }
  
  else{
    // printf("didn't find error\n");
    return EXIT_SUCCESS;
  }

}
