//WAP TO CHECK WHEATHER A NUMBER IS PALINDROM NUMBER OR NOT?
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,sum=0;
    printf("enter the number to check n =");
    scanf("%d",&n);
    for(n=temp;n!=0;n/10)
    {
        r=n%10;
        sum=sum*10+r;
    }
    if(temp==sum)
    {
        printf("its an palindrom number");
    }
    else 
    {
        printf("its not an palindrom number");
    }
    
return 0;
}