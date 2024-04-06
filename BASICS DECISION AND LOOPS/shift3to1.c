// WAP THAT INPUT 3 DIGIT NUMBER FROM USER AND SHIFTS 3RD DIGIT OF THE NUMBER TO THE FIRST PLACE )

#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x = ");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("x=%d",x);
    return 0;
}