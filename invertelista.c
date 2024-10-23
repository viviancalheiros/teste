#include <stdio.h>
#include <string.h>

#define TAM 10

void ler_lista(char lista[TAM], int i)
{
    if(i == TAM) return;
    else
    {
        scanf(" %c", &lista[i]);
        ler_lista(lista, i+1);
    }
}

void inverte(char lista[TAM], char nova_lista[TAM], int i)
{
    if(i == TAM) return;
    else
    {
        nova_lista[i] = lista[(TAM-1)-i];
        inverte(lista, nova_lista, i+1);
    }
}

void printar(char lista[TAM], int i)
{
    if(i == TAM) return;
    else
    {
        printf("%c ", lista[i]);
        printar(lista, i+1);
    }
}

int main()
{
    char lista[TAM];
    char nova_lista[TAM];
    ler_lista(lista, 0);
    inverte(lista, nova_lista, 0);
    printar(nova_lista, 0);

    return 0;
}