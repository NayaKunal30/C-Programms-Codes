//BASICS OF STRUCTURE HOW TO INITIALISE DECLARE AND ACCESS VALUES IN STRUCTURE : 
//READING WRITING AND ACCESSING AN STRUCTURE


#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct student //HERE STUDENT IS STRUCTURE NAME.
    {
        char name[50];
        int roll;
        int marks;
        char grade[5];
    } student; 

    student arr[3];    //IN STUDENT STURUCTURE WE MADE A ARRAY OF SIZE 3 TO HOLD INFO ABPUT 3 STUDENTS
    for (int i=0;i<=2;i++) //FOR LOOP TO SCAN VALUES OF NAME,ROLL,MARKS,GARDE FROM USER.
    {
        printf("enter the name of the student:\n");
        scanf("%s",arr[i].name);
        printf("enter the rollno of the student:\n");
        scanf("%d",&arr[i].roll);
        printf("enter the marks of the student:\n");
        scanf("%d",&arr[i].marks);
        printf("enter the grade of the student:\n");
        scanf("%s",arr[i].grade);  
    }
    printf("\n\n"); 
    printf("The details of the registered students are :\n");
    for(int i=0;i<=2;i++)  //FOR LOOP FOR PRINTING THE GIVEN VALUE BY USER TO THE ARRAY THAT IS STORED IN STUDENT STRUCTURE.
    {
        printf("Name of the student is:%s\n",arr[i].name);
        printf("roll number of the student is:%d\n",arr[i].roll);
        printf("Marks of the student is:%d\n",arr[i].marks);
        printf("Grade of the student is:%s\n" ,arr[i].grade);
        printf("\n\n");


    }
    return 0;

}
  