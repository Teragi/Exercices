#include<stdio.h>
#include<math.h>

int main(void)
{
    float a, b, c;
    printf("Entrer votre entier : \n");
    scanf("%f", &a);
    
    printf("Entrer votre deuxième entier : \n");
    scanf("%f", &b);
    
    printf("Entrer votre troisième entier : \n");
    scanf("%f", &c);
    
    if (a < b < c)
    {
        printf("Le plus grand des trois est %f\n", c);
    }
    else if (a > b > c)
    {
        printf("Le plus grand des trois est %f\n", a);
    }
    else if (b > a > c)
    {
        printf("Le plus grand des trois est %f\n.", b);
    }
}
