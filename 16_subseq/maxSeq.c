#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n){
  int max_len=0;
  int cur_len=0;
  for (int i=1;i<n+1;i++){
    cur_len+=1;
    if ((array[i]>array[i-1])&&(i<n)){
      continue;
    }
    else{
      if (max_len<cur_len){
	max_len=cur_len;
      }
      cur_len=0;
    }
  }
  return max_len;
}
