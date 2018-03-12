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
  /* Initialize x matrix */
  for(i=0; i<XSIZE; i++) {
    for(j=0; j<YSIZE; j++) {
      x[i][j] = 0;
    }
  }

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
      r = x[i][j];
      for (k = 0; k < YSIZE; k++) {
        r = r + y[i][k]*z[k][j];
      }
      x[i][j] = r;
    }
  }
}
