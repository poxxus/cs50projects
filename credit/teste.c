#include <stdio.h>
long numero;
int soma;
int counter;
int main(void)
{
    do
    {
        numero = 4003600000000014;
    }
    while (numero < 1000000000000 || numero > 10000000000000000);
    counter = 1;
    for (long i = 1; i < numero; i = i*10)
    {
        int digito = ((numero/i)%10);
        if ((counter%2) == 0 && (counter != 1))
        {
            digito = digito*2;
            if (digito >= 10)
            {
                soma += digito/10 + digito%10;
            }
            else
            {
                soma += digito;
            }
        }
        else
        soma += digito;
        counter += 1;
    }
    printf("soma = %i\n", soma);
}
