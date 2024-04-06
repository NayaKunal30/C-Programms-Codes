#include<stdio.h>
int main()
{
    int i , j , k , a[2][2],b[2][2],c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the choices of arrayA");
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the choices of arrayB");
            scanf("%d",&b[i][j]);
        }
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]+b[k][j]);
            }
        }
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        
    }
return 0;    
}