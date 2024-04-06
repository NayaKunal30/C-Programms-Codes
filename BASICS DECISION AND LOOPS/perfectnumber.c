//WAP TO CHECK WHEATHER A PERFECT NUMBER OR NOT?
#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("enter the number to check n =");
    scanf("%d",&n);
    for(n=temp;n!=0;n/10)
    {
        r=n%10;
        sum=sum+(r);
    }
    if(temp==sum)
    {
        printf("its an PERFECT number");
    }
    else
    {
        printf("its not A PERFECT number");
    }
        
return 0;
}