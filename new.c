#include<stdio.h>
int add()
{
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
return a+b;
} 

int sub()
{
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
return a-b;
}

int mult()
{
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
return a*b;
}
int div()
{
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
return a/b;
}


int main()
 {
  
  int division;
  division = div();
  printf("%d",division);
  return 0;
 }