//POINTERS
//USE %p TO PRINT ADDRESS.
#include<stdio.h>
int main()
{
    int a; 
    printf("enter a number to study=");
    scanf("%d",&a);
    int* x = &a; //pointer x stores address of variable a 
    int** p = &x; //double pointer stores the address of the pointer x itself.
    int ***k= &p; ///triple pointer stores adress of pointers of pointers...
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*x);
    printf("%d\n",**p);
    printf("%d\n",***k);
    return 0;
}