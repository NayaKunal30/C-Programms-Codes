//Patternforloopc
//1.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;

}
//2.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;

}
//3.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;

}
//4.
#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",k++);
        }
    printf("\n");
    }
    return 0;

}
//5.
#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",(k++)%2);
        }
    printf("\n");
    }
    return 0;

}
