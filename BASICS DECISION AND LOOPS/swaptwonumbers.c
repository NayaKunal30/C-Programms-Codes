// WAP THAT SWAPS THE VALUE OF 2 NUMBERS ENTERED BY USER 
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the first number a = ");
    scanf("%d",&a);
    printf("enter the second number b = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap \n a=%d \n b=%d ", a,b);
    return 0;
}