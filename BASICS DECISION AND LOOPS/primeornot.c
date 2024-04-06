//WAP TO CHECK WHEATHER A NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("enter the number to check wheather its prime of not n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("n=%d is a prime number",n);
    }
    else
    {
        printf("n=%d not a prime number",n );
    }
return 0;   
}