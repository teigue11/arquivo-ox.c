#include <stdio.h>

int validar(char c)
{
    return (c == 'X' || c == 'O');
}

void gravar(char matriz[3][3], char nomeArquivo[])
{
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(arquivo, "| %c | %c | %c |\n",
                matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    fprintf(arquivo, "\ncriado por derick");

    fclose(arquivo);
}
