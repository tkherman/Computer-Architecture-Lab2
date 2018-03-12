#include <stdio.h>
#include <math.h>

#define XSIZE 100
#define YSIZE 100

int main(void) {

  int x[XSIZE][YSIZE];
  int y[XSIZE][YSIZE];
  int z[XSIZE][YSIZE];

  int i, j, k;
  
  int r;

  /* Initialize y matrix */
  for(i=0; i<XSIZE; i++) {
    for(j=0; j<YSIZE; j++) {
      y[i][j] = i + j;
    }
  }

  /* Initialize z matrix */
  for(i=0; i<XSIZE; i++) {
    for(j=0; j<YSIZE; j++) {
	z[i][j] = i + j;
    }
  }

  /* Matrix multiplication loops */
  for (i = 0; i < XSIZE; i++) {
    for (j = 0; j < YSIZE; j++) {
      for (k = 0; k < YSIZE; k++) {
        x[i][j] = x[i][j] + y[i][k]*z[k][j];
      }
    }
  }
/*
   Printing out result 
  for (i = 0; i < XSIZE; i++) {
    for (j = 0; j < YSIZE; j++) {
        printf("%d, ", x[i][j]);
    }
    printf("\n");
  }*/

}
