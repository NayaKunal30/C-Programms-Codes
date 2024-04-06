//WAP TO ACCEPTS STRINGS AND COUNT TOTAL NUMBER OF WORDS.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i=0,j=1;
    printf("enter your string =");
    gets(a);
    while(a[i]!="\0");
    {
      if(a[i]==""&& a[i+1]=="");
      {
        j++;
      }
    }
    i++;
    printf("number of words in the given string=%d",j);

}



// WAP TO CALCULATE THE BLANK SPACES IN A STRINGS 
#include<stdio.h>
#include<string.h>
void main()
{
    char a[500];
    int i,count=0;
    printf("enter your string =");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==" ")
        {
            count=count+1;
        }
    }
printf("no of blank spaces=%d",count);
}




// WAP TO CALCULATE THE VOWELS CONSONANTS AND NUMBER OF SPACES IN A STRINGS 
#include<stdio.h>
#include<string.h>
void main()
{
    char a[500];
    int i,w=0,v=0,c=0;
    printf("enter your string =");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' )
        {
            v=v+1;
        }
        else if (a[i]= ' ') 
        {
            w=w+1;
        }
        else 
        {
            c=c+1;
        }
    }
printf("v=%d",v);
printf("w=%d",w);
printf("c=%d",c);
}
