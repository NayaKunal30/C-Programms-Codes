//WAP TO CHECK WHEATHER A ARMSTRONG NUMBER OR NOT?
#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("enter the number to check n =");
    scanf("%d",&n);
    for(n=temp;n!=0;n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(temp==sum)
    {
        printf("its an armstrong number");
    }
    else
    {
        printf("its not an armstrong number");
    }
        
return 0;
}

