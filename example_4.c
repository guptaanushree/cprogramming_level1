// Function Example with no return type and with argument

#include <stdio.h>

void addition(int a, int b) {
  int sum = a+b;
  printf("\n %d", sum);
}

int main() {

  int a, b;
  printf("Enter the value of a");
  scanf("%d", &a);

  printf("Enter the value of b");
  scanf("%d", &b);

  addition(a,b);

}