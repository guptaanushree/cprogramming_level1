#include <stdio.h>

int main() {
  int b = 20;
  {
    int a = 0;
    int b = 2;
    a += b;
    printf("%d", a);
  }
}
