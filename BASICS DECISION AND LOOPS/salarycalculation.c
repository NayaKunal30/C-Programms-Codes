// WAP TO CALCULATE SALARY 
#include<stdio.h>
int main()
{
    float bs,da,hr,gs;
    printf("bs =");
    scanf("%f",&bs);
    da=(0.4)*bs;
    hr=(0.2)*bs;
    gs=(bs+da+hr);
    printf("gs=%f",gs);
    return 0;
}