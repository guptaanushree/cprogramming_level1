#include<stdio.h>
 
int sub()
{
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
return a-b;
}

int main()
 {
  int subtract;
  subtract = sub();
  printf("%d",subtract);
  return 0;
 }