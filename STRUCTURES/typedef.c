#include<stdio.h>

//TYPEDEF: USED TO CONVERT NAME OF DATA TYPE ACCORDING TO USER.
typedef int kunal;
typedef float nayak ;

int main()
{
    kunal x=30; //HERE the int datatype name is changed to kunal .
    nayak y=20; //HERE the float datatype name is changed to nayak .
    printf("%d\n",x);
    printf("%f\n",y);
    return 0 ;

}

//Multiple pointer declartion - using typedef:

#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=2,y=4;
    pointer a=&x , b=&y ;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}