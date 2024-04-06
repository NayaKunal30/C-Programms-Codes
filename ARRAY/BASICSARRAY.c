//INITIALISING AND SCANNING AND PRINTING OF AN ARRAY:
#include<stdio.h>
#include<limits.h>
int main()
{
    //PRINT AND SCAN AN ARRAY:
    int n ;
    printf("enter the size of array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element to insert %d\n = " , i);
        scanf("%d",&arr[i]);
    }
    printf("elements in the given array is :\n = ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    
        
    //REVERSING AN ARRAY:
    for(int i=n;i>=0;i--){
        printf("%d ", arr[i]);
    }

    //ADDRESS OF AN ARRAY :
    printf("address of all the elements stored in the array\n");
    for(int i=0;i<n;i++)
    {
        printf("%p\n",&arr[i]);
    }

    //SWAP TWO VALUES OF ELEMENTS IN AN ARRAY :
    int temp,a,b;
    printf("enter the first element of an array to swap= ");
    scanf("%d",&a);
    printf("enter the second element of an array to swap= ");
    scanf("%d",&b);
    temp=arr[b];
    arr[b]=arr[a];
    arr[a]=temp;
    printf("%d%d",arr[a],arr[b]);
    
   
        product=(product*arr[i]);
    }
    printf("\n the sum of the elements of the array is : %d",product); 
     //SUM OF ALL ELEMENTS IN AN ARRAY :
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf(" the sum of the elements of the array is : %d",sum); 

    //PRODUCT OF ALL ELEMENTS IN AN ARRAY :
    int product=1;
    for(int i=0;i<n;i++)
    {
    //MAXIMUM OUT OF ALL ELEMENTS IN AN ARRAY (searching) :
    int max = INT_MAX;
    printf("\nMaximum value in the array given is =");
    for(int i=0;i<=n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);


    

return 0;
} 
