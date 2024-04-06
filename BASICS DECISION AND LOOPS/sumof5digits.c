// WAP TO FIND SUM OF DIGITS OF A 5 DIGIT NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
    int x,k,sum=0;
    printf("enter a 5digit number x=");
    scanf("%d",&x);
    for(;x!=0;x/10)
    {
        k=x%10;
        sum=(sum+k);
    }
    printf("sum=%d the sum is",sum);
    return 0;
}
