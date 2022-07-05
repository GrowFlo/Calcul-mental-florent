/* Importation des éléments nécessaire à l'affichage graphique */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    printf("Bienvenue au jeu de calcul mental :\n");
    printf("Choisisser le type de calcul que vous voulez :\n");
    printf("Addition: 1 / Multiplication: 2 / Division 3 / Soustraction 4 : ");
    int choix;
    scanf_s("%d", &choix);
    int resultat;
    int nombrea;
    int nombreb;
    int valeurUtilisateur;
    if (choix == 1)
    {
        printf("Vous avez choisit de faire une addition.\n");
        nombrea = rand() % 101;
        nombreb = rand() % 101;
        resultat = addition(nombrea, nombreb);
        printf("%d + %d = ", nombrea, nombreb);
    }
    return 0;
}