#include <stdio.h>

int avg(int x, int y) {
  return (x + y) / 2;
}

int main() {
  int a = 10;
  int b = 20;
  int c = avg(a, b);
  printf("average of %d and %d is %d\n", a, b, c);
  return 0;
}
