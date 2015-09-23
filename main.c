#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

int main(int argc, char *argv[])
{
    Coordonnees pointA;
    Coordonnees pointB;
    pointA.varx=11;
    pointA.vary=12;
    pointB.varx=21;
    pointB.vary=22;
    printf("A(%d,%d) et B(%d,%d).\n\n",pointA.varx,pointA.vary,pointB.varx,pointB.vary);
    ////////////////////////////////////////////
    Personne joueurs[2];
    int i=0;
    for(i=0;i<2;i++)
    {
        printf("Joueur %d\n",i+1);
        printf("Votre nom : ");
        scanf("%s",joueurs[i].nom);
        printf("Votre prenom : ");
        scanf("%s",joueurs[i].prenom);
        printf("Votre adresse : ");
        scanf("%s",joueurs[i].adresse);
        printf("Votre age : ");
        scanf("%d",&joueurs[i].age);
        printf("Entrer 1 si vous etes un garcon et 2 si vous etes une fille : ");
        scanf("%d",&joueurs[i].garcon);
    }

    for(i=0;i<2;i++)
    {
        if(joueurs[i].garcon==1)
        {
            printf("%s %s,\nVous habitez : %s\nVous avez %d ans et vous etes un garcon.\n",joueurs[i].prenom,joueurs[i].nom,joueurs[i].adresse,joueurs[i].age);
        }else
        {
            printf("%s %s,\nVous habitez : %s\nVous avez %d ans et vous etes une fille.\n",joueurs[i].prenom,joueurs[i].nom,joueurs[i].adresse,joueurs[i].age);
        }
    }
    return 0;
}
