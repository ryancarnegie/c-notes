#include <stdio.h>

void swap(int* const, int* const); // prototype

int main(void) {
  int first = 5;
  int second = 100;
  swap(&first, &second);
  printf("first = %d : second = %d\n", first, second);
  return 0;
}

void swap(int* const x, int* const y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}


//output 
first = 100 : second = 5


