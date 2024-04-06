#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon;
void change(pokemon* p)
{
    (*p).hp=300;
    (*p).attack=500;
    (*p).speed=450;
    (*p).tier='S';

}
int main()
{
    pokemon mewtwo;
    mewtwo.attack= 150;
    mewtwo.hp=200;
    mewtwo.speed=400;
    mewtwo.tier='S';
    printf("%d\n",mewtwo.attack);
    printf("%d\n",mewtwo.hp);
    printf("%d\n",mewtwo.speed);
    printf("%c\n",mewtwo.tier);

    change(&mewtwo);

    printf("%d\n",mewtwo.attack);
    printf("%d\n",mewtwo.hp);
    printf("%d\n",mewtwo.speed);
    printf("%c\n",mewtwo.tier);

    pokemon* x= &mewtwo; //using pointers to change the value of the variable.
    (*x).hp=70;
    printf("%d\n",mewtwo.hp);
    

    
  




    

}
