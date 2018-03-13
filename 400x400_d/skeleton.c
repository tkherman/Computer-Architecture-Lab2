#include <stdio.h>
#include <math.h>

#define XSIZE 400
#define YSIZE 400

int main(void) {

  int x[XSIZE][YSIZE];
  int y[XSIZE][YSIZE];
  int z[XSIZE][YSIZE];

  int i, j, k;
  
  int r, s, q, t;

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
  for (i = 0; i < XSIZE; i += 2) {
    for (j = 0; j < YSIZE; j += 2) {
      r = x[i][j];
      s = x[i+1][j];
      q = x[i][j+1];
      t = x[i+1][j+1];
      for (k = 0; k < YSIZE; k++) {
        r = r + y[i][k]*z[k][j];
        s = s + y[i+1][k]*z[k][j];
        q = q + y[i][k]*z[k][j+1];
        t = t + y[i+1][k]*z[k][j+1];
      }
      x[i][j] = r;
      x[i+1][j] = s;
      x[i][j+1] = q;
      x[i+1][j+1] = t;
    }
  }

}
