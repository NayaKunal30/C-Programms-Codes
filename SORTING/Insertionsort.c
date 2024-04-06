//INSERTION SORT BASICS :
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
    

    //INSERTION SORT:

    for(int i=1;i<n-1;i++)
    {
        int j=i;
        while(arr[j]<arr[j-1])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;

        }
    
    }
    printf("\n");
    printf("the array after sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
