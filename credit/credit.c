#include <stdio.h>
#include <cs50.h>
long numero;
int soma;
int counter;
int ultimo;
int tamanho;
int vez;
int main(void)
{
    vez = 1;
    numero = get_long("Number: ");
    if (numero > 1000000000000 && numero < 10000000000000000)
    {
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
            {
                soma += digito;
            }
            counter += 1;
            if ((i*100 > numero) && vez == 1)
            {
                ultimo = numero/i;
                tamanho = counter;
                vez -= 1;

            }

        }
        if ((soma%10) == 0)
        {
            if ((ultimo == 34 || ultimo == 37) && tamanho == 15)
            {
                printf("AMEX\n");
            }
            else if ((ultimo == 51 || ultimo == 52 || ultimo == 53 || ultimo == 54 || ultimo == 55) && tamanho == 16)
            {
                printf("MASTERCARD\n");
            }
            else if ((ultimo % 40 >=0 && ultimo % 40 <= 9) && (tamanho == 13 || tamanho == 16))
            {
                printf("VISA\n");

            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }
}


