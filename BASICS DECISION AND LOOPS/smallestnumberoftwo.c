#include<stdio.h>
int main()
{
    int a,b ;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    {
        if(a>b)
        printf("b is smaller");
        else
        printf("a is smaller");
    }
    return 0 ;
}