//SELECTION SORT BASICS :
// ASCENDING ORDER ME ELEMENTS KA ARRANGEMENTS . SWAPPING KARKE :)

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<limits.h>
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
    

    //SELECTION SORT:
    for(int i=0;i<=n-1;i++)
    {
        int min = INT_MAX;
        int minidx=-1;
        for(int j=i;j<=n-1;j++)
        {
            if(min>arr[j])
            {
                min=arr[j]; 
                minidx=j;
            }
        }
    
    //SWAP FIRST ELEMENT OF UNSORTED PART AND MINIMUM ELEMENT.
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    printf("the array after sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

    
}