//BUBBLE SORT BASICS :
// ASCENDING ORDER ME ELEMENTS KA ARRANGEMENTS . SWAPPING KARKE :)

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n ;
    printf("enter the size of array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element to insert %d\n = " , i);
        scanf("%d",&arr[i]);
    }
    printf("UNSORTED array is :\n = ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    

    //BUBBLE SORT:

    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=0;j<=n-1-i;j++) 
        //here we can use j<=n-2 also instead of this for(int j=0;j<=n-1-i;j++) but use this to optimize.
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
        
    }

    printf("\n");
    printf("the array after sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
