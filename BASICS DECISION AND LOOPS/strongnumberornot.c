#include<stdio.h>
int main()
{
    int n,i,r,fact=1,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n);
    temp=n;
    while(n) 
    {
        i=1,fact=1;
        r=n%10;
        while(i<=r)
        {
            fact=fact*i;
            i++;
        }
    sum=sum+fact;
    n=n/10;
    }
    if(temp==sum)
    {
        printf("its a strong number");
    }
    else
    {
        printf("its not a strong number");
    }
return 0 ;   
}