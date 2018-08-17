// Function Example with no return type and no argument

#include <stdio.h>

void addition() {
  int a, b, sum;
  printf("Enter the value of a");
  scanf("%d", &a);

  printf("Enter the value of b");
  scanf("%d", &b);

  sum = a+b;

  printf("\n %d", sum)

}

int main() {
  addition();
}