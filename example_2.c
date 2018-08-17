// Function Example with return type and with argument

#include <stdio.h>

int addition(int a, int b) {
  return a+b;
}

int main() {

  int a, b;
  printf("Enter the value of a");
  scanf("%d", &a);

  printf("Enter the value of b");
  scanf("%d", &b);

  int sum;

  sum = addition(a,b);

  printf("\n %d", sum);
}