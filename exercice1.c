#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b, c;
    printf("Entrer une valeur : \n");
    scanf("%f", &a);
    printf("Entrer une deuxième valeur : \n");
    scanf("%f", &b);
    
    c = (a * b); //Formule mathématique
    printf("Leur produit est de %.2f\n.", c);
}
