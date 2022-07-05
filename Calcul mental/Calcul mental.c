/* Importation des éléments nécessaire à l'affichage graphique */
#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"

int main(int argc, char* argv[])
{
    srand(time(0));
    printf("Bienvenue au jeu de calcul mental :\n");
    printf("Choisisser le type de calcul que vous voulez :\n");
    printf("Addition: 1 / Multiplication: 2 / Soustraction 3 : ");
    int choix;
    scanf_s("%d", &choix);
    int resultat = 0;
    int nombrea = 0;
    int nombreb = 0;
    int valeurUtilisateur = 0;
    if (choix == 1)
    {
        printf("Vous avez choisit de faire une addition.\n");
        nombrea = rand() % 101;
        nombreb = rand() % 101;
        resultat = addition(nombrea, nombreb);
        printf("%d + %d = ", nombrea, nombreb);
        scanf_s("%d", &valeurUtilisateur);
        printf("\n");
        if (valeurUtilisateur == resultat)
        {
            printf("La valeur saisie est correcte \n");
        }
        else
        {
            printf("La valeur est fausse");
        }
    }
    else if (choix == 2)
    {
        printf("Vous avez choisit de faire une multiplication.\n");
        nombrea = rand() % 11;
        nombreb = rand() % 11;
        resultat = multiplication(nombrea, nombreb);
        printf("%d x %d = ", nombrea, nombreb);
        scanf_s("%d", &valeurUtilisateur);
        printf("\n");
        if (valeurUtilisateur == resultat)
        {
            printf("La valeur saisie est correcte \n");
        }
        else
        {
            printf("La valeur est fausse");
        }
    }
    else if (choix == 3)
    {
        nombrea = rand() % 101;
        nombreb = rand() % 101;
        resultat = soustraction(nombrea, nombreb);
        printf("%d - %d = ", nombrea, nombreb);
        scanf_s("%d", &valeurUtilisateur);
        printf("\n");
        if (valeurUtilisateur == resultat)
        {
            printf("La valeur saisie est correcte \n");
        }
        else
        {
            printf("La valeur est fausse");
        }
    }
    else
    {
        printf("Le choix saisi n'est pas disponible");
    }
    return 0;
}