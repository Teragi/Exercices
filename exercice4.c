#include <stdio.h>
#include <string.h>

int main(void)
{
    //ouvrir le csv file
    FILE *file = fopen("car.csv", "a"); //ouvrir le fichier pour rajouter un fichier
    if (!file)
    {
        return 1;
    }
    //obtenir marque + plaque.
    float car, number;
    printf("Modèle de la voiture : \n");
    scanf("%f", &car);
    printf("Entrer la plaque d'immatriculation : \n");
    scanf("%f", &number);
    
    //imprimer dans le fichier
    
    fprintf(file, "%f,%f\n", car, number);
    
    //fermer le fichier
    fclose(file);
}

//Bien compiler mais rien d'afficher.
