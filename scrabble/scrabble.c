#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int score(string palavra);
string minusculo(string palavra);

int main(void)
{
    string p1palavra = get_string("Player 1: ");

    string p2palavra = get_string("Player 2: ");

    int pontuacao1 = score(minusculo(p1palavra));

    int pontuacao2 = score(minusculo(p2palavra));

    if (pontuacao1 > pontuacao2)
    {
        printf("Player 1 wins!");
    }

    else if (pontuacao2 > pontuacao1)
    {
        printf("Player 2 wins!");
    }

    else
    {
        printf("Tie!");
    }

}

int score(string palavra)
{
    int pontuacao = 0;

    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'n' || palavra[i] == 'o' || palavra[i] == 'r' || palavra[i] == 's' || palavra[i] == 't' || palavra[i] == 'u' || palavra[i] == 'l')
        {
            pontuacao += 1;
        }
        else if (palavra[i] == 'd' || palavra[i] == 'g')
        {
            pontuacao += 2;
        }
        else if (palavra[i] == 'b' || palavra[i] == 'c' || palavra[i] == 'm' || palavra[i] == 'p' )
        {
            pontuacao += 3;
        }
        else if (palavra[i] == 'f' || palavra[i] == 'h' || palavra[i] == 'v' || palavra[i] == 'w' || palavra[i] == 'y')
        {
            pontuacao += 4;
        }
        else if (palavra[i] == 'k')
        {
            pontuacao += 5;
        }
        else if (palavra[i] == 'j' || palavra[i] == 'x')
        {
            pontuacao += 8;
        }
        else if (palavra[i] == 'q' || palavra[i] == 'z')
        {
            pontuacao += 10;
        }
    }
    return pontuacao;
}

string minusculo(string palavra)
{
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
    return palavra;
}

