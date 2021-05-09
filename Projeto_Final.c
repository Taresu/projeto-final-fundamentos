#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "functions/utils/limpaMatriz.c"
#include "functions/utils/imprimeMatriz.c"
#include "functions/utils/alocaMatriz.c"
#include "functions/utils/copiaMatriz.c"
#include "functions/utils/desalocaMatriz.c"

#include "functions/personagens/iniciaBloco.c"
#include "functions/personagens/iniciaBlinker.c"
#include "functions/personagens/iniciaGlider.c"
#include "functions/personagens/iniciaLWSS.c"
#include "functions/personagens/iniciaSapo.c"

#include "functions/mortoVivo.c"
#include "functions/emiteBeep.c"
#include "functions/imprimeLoading.c"
#include "functions/imprimeTitulo.c"
#include "functions/menuInicialDoJogo.c"
#include "functions/instanciaDoJogo.c"

#include "structs.c"

int main()
{
  // Structs
  Tab t[TAM];

  // Variaveis
  int novamente = 1, x = 1;

  system("title JOGO DA VIDA");
  imprimeTitulo();

  do
  {
    // O usuário entra com o nome do automato de seu interesse
    printf("Nome do jogo: ");
    printf("\n");
    printf(">>> ");
    gets(t[x].nomeJogo);

    // dimensões da matriz do jogo da vida
    printf("\n");
    printf("Dimensoes do campo (linhas e colunas \"x x\"): ");
    printf("\n");
    printf(">>> ");
    scanf("%d %d", &t[x].nL, &t[x].nC);

    //define o numero de ciclos que o jogo vai rodar
    printf("\n");
    printf("Quantidade de ciclos (rodadas): ");
    printf("\n");
    printf(">>> ");
    scanf("%d", &t[x].ciclos);

    Sleep(250);

    system("cls");

    t[x].m = alocaMatriz(t[x].nL, t[x].nC);

    menuInicialDoJogo(t[x].m, t[x].nL, t[x].nC);

    printf("*JOGO: %s*\n", t[x].nomeJogo);

    instanciaDoJogo(t[x].m, t[x].nL, t[x].nC, t[x].ciclos);

    desalocaMatriz(t[x].m, t[x].nL);

    printf("\nJogar novamente? \n(1) SIM \nDigite qualquer outra tecla para sair... \n>>> ");
    scanf("%d", &novamente);

    x++;
  } while (novamente == 1);

  return (0);
}