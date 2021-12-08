#include <stdio.h>
/********variables globales*****/
const int nblignes=6;
const int nbcolonnes=255;
char mesamis [nblignes][nbcolonnes];
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
            if(nbamis>5) //si plus de 5
            {
                printf("Vousn ne pouvez plus saisir d'amis\n");

            }
            else {
                saisieAmis(nbamis);
            }
            menu();
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
