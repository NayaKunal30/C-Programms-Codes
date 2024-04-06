// NESTING  STRUCTURES:

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon;

    typedef struct legendrypokemon
    {
        pokemon normal;
        char ability[10];
    } legendrypokemon;

    legendrypokemon mewtwo;
    strcpy(mewtwo.ability , "pressure" );
    mewtwo.normal.attack= 150;
    mewtwo.normal.hp=200;
    mewtwo.normal.speed=400;
    strcpy(mewtwo.normal.name,"mewtwo" );
    


    printf("mewtwo ability is : %s \n",mewtwo.ability);
    printf("mewtwo attack is : %d\n",mewtwo.normal.attack);
    printf("mewtwo speed is : %d\n",mewtwo.normal.speed);
    
    return 0;

}