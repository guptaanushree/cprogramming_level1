// Function Example with return type and no argument

#include <stdio.h>

int addition() {
  int a, b;
  printf("Enter the value of a");
  scanf("%d", &a);

  printf("Enter the value of b");
  scanf("%d", &b);

  return a+b;
}

int main() {
  int sum;
  sum = addition();
  printf("\n %d", sum);
}