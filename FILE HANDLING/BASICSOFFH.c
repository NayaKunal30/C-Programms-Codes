#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
     //CREATING A FILE :

    FILE *ptr =fopen("temp.txt","w");
    char str[500];
    printf("FILE HAS BEEN CREATED SUCCESSFULLY CONGO !!!");
    return 0;


    //TO READ A FILE THAT IS CREATED:
    FILE *ptr =fopen("temp.txt","r");
    char str[500];
    while(fgets(str,500,ptr)!=NULL);
    {
        printf("%s",str);
    }
    return 0;

    //TO WRITE A FILE :
    FILE *ptr =fopen("temp.txt","w");
    char str[]= "STOP THINKING START DOING";
    fputs(str,ptr);
    fclose(ptr);
    printf("file has been written succesfully");
    return 0;

    //to append something in file :
    FILE *ptr =fopen("temp.txt","a");
    char str[]= "\n STAY POSITIVE";
    fputs(str,ptr);
    fclose(ptr);
    printf("file has been appended succesfully");
    return 0;


    

}