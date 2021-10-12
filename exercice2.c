#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a =1;
    int b =2;
    printf("a vaut %i et b vaut %i\n", a, b);
    swap(&a, &b); //utilisation var temoraire
    printf("a vaut %i et b vaut %i\n", a, b);
}


void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
