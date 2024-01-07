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
            else if (texto[i] == '.' || texto[i] == '?' || texto[i] == '!')
            {
                frases += 1;
            }
        }
    float L = ((float) letras/ (float) palavras)*100;
    float S = ((float) frases/ (float) palavras)*100;
    float grade = 0.0588*L - 0.296*S - 15.8;
    int result = grade + 0.5;
    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }
}





