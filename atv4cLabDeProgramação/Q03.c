/*
Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void solicitaRecebe(int *);

int main(int argc, char const *argv[])
{
    int *p = NULL;

    p = malloc(sizeof(int));

    solicitaRecebe(p);

    return 0;
}
void solicitaRecebe(int *p)
{
    int var = 0;

    puts("Insira um valor");
    scanf("%d", (p + 0));

    var = *(p + 0);

    while (*(p + 0) != 0)
    {
        puts("Insira um valor");
        scanf("%d", (p + 0));
        var = *(p + 0) < var ? *(p + 0) : var;
        printf("O menor valor atualmente eh:%d\n", var);
    }
}