#include <cs50.h>
#include <stdio.h>
int altura;
int main(void)
{
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);

    for (int i = 0; i < altura; i++)
    {
        for (int j = altura - i; j > 1; j--) // ESPAÇOS
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) // ESQUERDA
        {
            printf("#");
        }
        printf("  ");
        for (int w = 0; w <= i; w++) // DIREITA
        {
            printf("#");
        }
        printf("\n");
    }
}
