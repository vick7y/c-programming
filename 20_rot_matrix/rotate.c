#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(char matrix[10][10]){
  if (!matrix){
    return;
   }

  char rotated[10][10];
  for (int i=0; i<10;i++){
    for (int j=0; j<10;j++){
      rotated[i][j]=matrix[i][j];
    }
  }
  
  for (int i=0; i<10;i++){
    for (int j=0; j<10;j++){
      matrix[i][j]=rotated[9-j][i];
	}
      }
    }
