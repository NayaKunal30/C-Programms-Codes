#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
char op;
printf("1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
printf("enter the values of a and b =");
scanf("%d %d",&a,&b);
printf("enter your choice=");
scanf("%d",&op);
switch(op)
{
  case '+':
  printf("sum of %d and %d is : %d ", a,b,a+b);
  break;
  case '-' :
  printf("diffence of %d and %d is : %d ", a,b,a-b);
  break;
  case '*' :
  printf("product of %d and %d is : %d ", a,b,a*b);
  break;
  case '/' :
  printf("division of %d and %d is : %d ", a,b,a/b);
  break;
  default :
  printf("invalid operator.");
  break;
}
return 0;
}