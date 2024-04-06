//WAP ADD 1ST AND 4TH DIGIT OF A 4 DIGIT NUMBER 
#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("enter any 4digit number = ");
    scanf("%d",&n );
    a=n/1000;
    sum=sum+a;
    a=n%10;
    sum=sum+a;
    printf("sum=%d",sum);
    return 0;
    }