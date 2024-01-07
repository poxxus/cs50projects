#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string palavra = get_string("Input: ");
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
    printf("%c", palavra[1]);
}

