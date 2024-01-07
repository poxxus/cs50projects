#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string("Text: ");
    int palavras = 1;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] == ' ')
        {
            palavras += 1;
        }
    }
    int letras = 0;
    int frases = 0;
        for (int i = 0, n = strlen(texto); i < n; i++)
        {
            if (isalpha(texto[i]))
            {
                letras += 1;
            }
            else if (texto[i] == '.')
            {
                frases += 1;
            }
        }
    float L = ((float) letras/ (float) palavras)*100;
    float S = ((float) frases/ (float) palavras)*100;
    printf("%i %i %i\n", palavras, letras, frases);
}
