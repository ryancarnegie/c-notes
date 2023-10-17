#include <stdio.h>

void swap(int* const, int* const); // prototype

int main(void) {
  int first = 50;
  int second = 100;
  swap(&first, &second);
  printf("x = %d : y = %d\n", first, second);
  return 0;
}

void swap(int* const x, int* const y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}


//output 
x = 100 : y = 5


