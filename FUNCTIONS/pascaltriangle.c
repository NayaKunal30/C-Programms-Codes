//WAF OF PASCAL TRIANGLE :

#include<stdio.h>
int factorial(int x) //factorial fucntion that can be used anywhere to find factorial
{
    int fact=1;
    for(int i=2;i<=x;i++)
    fact = fact*i;
    return fact;
}

int combination(int n , int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r)); //combination function to find out ncr value anywhere in the code
    return ncr;

}
int main()
{
    int n,r;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int icj=combination(i,j);
            printf("%d  ",icj);
        }
        printf("\n");
    }
    
    return 0;
}