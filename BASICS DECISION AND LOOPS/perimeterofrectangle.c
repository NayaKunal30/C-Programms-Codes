// WAP TO CALCULATE PERIMETER OF A RECTANGLE
#include<stdio.h>
int main()
{
    int l,b,peri;
    printf("enter the length=");
    scanf("%d",&l);
    printf("enter the breadth=");
    scanf("%d",&b);
    peri= 2*(l+b);
    printf("peri=%d",peri);
    return 0 ;
}