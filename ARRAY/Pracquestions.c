//Q1.WAP TO FIND THE TOTAL NUMBER OF PAIRS IN THE ARRAY WHOSE SUM IS EQUAL TO A GIVEN NUMBER X ?

/*#include<stdio.h>
int main()
{
    //PRINT AND SCAN AN ARRAY:
    int n ;
    int totalpairs=0;
    int x;
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
    printf("\n enter the value of x to check :");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==x)
            {
                totalpairs++;
                printf("(%d %d)\n", arr[i],arr[j]);
            }

        }


    }
}
//Q2.WAP TO FIND THE TOTAL NUMBER OF TRIPLETS IN THE ARRAY WHOSE SUM IS EQUAL TO A GIVEN NUMBER X ?
#include<stdio.h>
int main()
{
     //PRINT AND SCAN AN ARRAY:
    int n ;
    int totaltriplets=0;
    int x;
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
    printf("\n enter the value of x to check :");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    totaltriplets++;
                    printf("(%d %d %d )\n", arr[i],arr[j],arr[k]);

                }
            }

        }
    }
}




   
    
 
