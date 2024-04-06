//FIBONAACCI SERIES 
//0 1 1 2 3 5 8 13 21 ......
#include <stdio.h>
int main()
{
    int a=0,b=1,sum=0,i,n;
    printf("enter the value of n till which u want to see the series= ");
    scanf("%d",&n);
    for(i=0;i<=(n-2);i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
return 0 ;
}