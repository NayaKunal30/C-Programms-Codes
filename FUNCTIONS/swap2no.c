//WAP TO SWAP TWO NUMBERS (PASS BY REFERENCE) 
#include<stdio.h>
void swap(int* x , int* y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
    return ;
}
int main()
{
  int a,b;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("swaped number is : a=%d b=%d ", a,b); 
    return 0 ; 
}
