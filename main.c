#include <stdio.h>
/********variables globales*****/
char mesamis [6][255];
int nbamis=0;
/*******************prototypes******************/
void saisieAmis(int nbamis);
void afficherAmis();
void menu();
/************implémentations********************/
void saisieAmis(int i) {

        printf("Veuillez entrer le nom de l'ami\n");
        scanf("%s",mesamis[i]);
        nbamis++;
        menu();

}

void afficherAmis() {
    for(int i=0;i<nbamis;i++)
    {

        printf("%s\n",mesamis[i]);

    }
    menu();
}

void menu()
{
int choix=0;
    printf("1-Entrez un nom\n");
    printf("2-Affichez les noms\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            saisieAmis(nbamis);
            break;

        case 2:
            afficherAmis();
            break;

        default:
            printf("Erreur de saisie");
            menu();


    }

}


int main() {
    saisieAmis(0);
    return 0;
}
