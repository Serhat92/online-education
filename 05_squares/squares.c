#include <stdio.h>
#include <stdlib.h>

int max(int f1, int f2) {
  if (f1 > f2) {
    return f1;
  }
  else {
    return f2;
  }
}

void squares(int size1, int x_offset, int y_offset, int size2) {
  int xsize = x_offset + size2;
  int ysize = y_offset + size2;
  int w = max(size1, xsize);
  int h = max(size1, ysize);
  for (int y = 0; y < h; y++){
    for (int x = 0; x < w; x++){
      if ((x >= x_offset && x < xsize) && (y == y_offset || y == ysize - 1)) {
	printf("*");
      } else if((y >= y_offset && y < ysize) && (x == x_offset || x == xsize - 1)) {
	printf("*");

      } else {
	if ((x < size1) && (y == 0 || y == size1 - 1)) {
	  printf("#");
	} else if((y < size1) && (x == 0 || x == size1 - 1)) {
	  printf("#");
	} else {
	  printf(" ");
	}
      }
    }
    printf("\n");
  }
}
