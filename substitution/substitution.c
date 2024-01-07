#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Must provide a key\n");
        return 1;
    }
    if (strlen(argv[1]) < 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    char alfabeto[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char key[26];
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must only contain letters\n");
            return 1;
        }
        key[i] = argv[1][i];
        for (int j = 0, tamanho = strlen(key); j < i; j++)
        {
            if (tolower(key[j]) == tolower(argv[1][i]))
            {
                printf("Key must contain each letter only once\n");
                return 1;
            }
        }

    }
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int k = 0, tamanhop = strlen(plaintext); k < tamanhop; k++)
    {
        if (!isalpha(plaintext[k]))
        {
            printf("%c", plaintext[k]);
        }
        else
        {
            for (int w = 0; w < 26; w++)
            {
                if (tolower(plaintext[k]) == tolower(alfabeto[w]))
                {
                    if (islower(plaintext[k]))
                    {
                        printf("%c", tolower(key[w]));
                    }

                    if (isupper(plaintext[k]))
                    {
                        printf("%c", toupper(key[w]));
                    }
                }
            }
        }
    }
    printf("\n");
}
