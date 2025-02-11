#include <stdio.h>

int avg(int x, int y) {
  // printf("x = %d, y = %d\n", x, y);
  int sum = x + y;
  // printf("sum = %d\n", sum);
  return sum / 2;
}

int main() {
  int a = 10;
  int b = 20;
  int c = avg(a, b);
  printf("average of %d and %d is %d\n", a, b, c);
  return 0;
}
