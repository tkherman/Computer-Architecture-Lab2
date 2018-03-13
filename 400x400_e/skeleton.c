#include <stdio.h>
#include <math.h>

#define XSIZE 400
#define YSIZE 400

int main(void) {

  int x[XSIZE][YSIZE];
  int y[XSIZE][YSIZE];
  int z[XSIZE][YSIZE];

  int i, j, k;
  
  int x11, x12, x13, x14, x21, x22, x23, x24;
  int x31, x32, x33, x34, x41, x42, x43, x44;

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
  for (i = 0; i < XSIZE; i += 4) {
    for (j = 0; j < YSIZE; j += 4) {
      x11 = x[i][j];
      x12 = x[i][j+1];
      x13 = x[i][j+2];
      x14 = x[i][j+3];
      x21 = x[i+1][j];
      x22 = x[i+1][j+1];
      x23 = x[i+1][j+2];
      x24 = x[i+1][j+3];
      x31 = x[i+2][j];
      x32 = x[i+2][j+1];
      x33 = x[i+2][j+2];
      x34 = x[i+2][j+3];
      x41 = x[i+3][j];
      x42 = x[i+3][j+1];
      x43 = x[i+3][j+2];
      x44 = x[i+3][j+3];
      for (k = 0; k < YSIZE; k++) {
        x11 = x11 + y[i][k]*z[k][j];
        x12 = x12 + y[i][k]*z[k][j+1];
        x13 = x13 + y[i][k]*z[k][j+2];
        x14 = x14 + y[i][k]*z[k][j+3];

        x21 = x21 + y[i+1][k]*z[k][j];
        x22 = x22 + y[i+1][k]*z[k][j+1];
        x23 = x23 + y[i+1][k]*z[k][j+2];
        x24 = x24 + y[i+1][k]*z[k][j+3];

        x31 = x31 + y[i+2][k]*z[k][j];
        x32 = x32 + y[i+2][k]*z[k][j+1];
        x33 = x33 + y[i+2][k]*z[k][j+2];
        x34 = x34 + y[i+2][k]*z[k][j+3];

        x41 = x41 + y[i+3][k]*z[k][j];
        x42 = x42 + y[i+3][k]*z[k][j+1];
        x43 = x43 + y[i+3][k]*z[k][j+2];
        x44 = x44 + y[i+3][k]*z[k][j+3];
      }
      x[i][j] = x11;
      x[i][j+1] = x12;
      x[i][j+2] = x13;
      x[i][j+3] = x14;
      x[i+1][j] = x21;
      x[i+1][j+1] = x22;
      x[i+1][j+2] = x23;
      x[i+1][j+3] = x24;
      x[i+2][j] = x31;
      x[i+2][j+1] = x32;
      x[i+2][j+2] = x33;
      x[i+2][j+3] = x34;
      x[i+3][j] = x41;
      x[i+3][j+1] = x42;
      x[i+3][j+2] = x43;
      x[i+3][j+3] = x44;
    }
  }
}
