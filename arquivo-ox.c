#include <stdio.h>
#include <stdlib.h>

int validar(char c);
void gravar(char matriz[3][3], char nomeArquivo[]);

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int linha, coluna;
    int indice = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            char simbolo = argv[indice][0];

            if (!validar(simbolo))
            {
                printf("Erro: use apenas X ou O\n");
                return 1;
            }

            matriz[linha][coluna] = simbolo;
            indice++;
        }
    }

    gravar(matriz, argv[1]);

    return 0;
}
