#define ORG 'X'

void instanciaDoJogo(char **m, int nL, int nC, int ciclos)
{
  char **aux;
  int mortos = 0, vivos = 0;
  int i, j, k;

  aux = alocaMatriz(nL, nC); //matriz que devera ser usada para atualizar cada jogada

  copiaMatriz(m, aux, nL, nC); //funcao que copia a matriz da inicialização na auxiliar

  ////laco de repeticao para jogar TOTAL DE CICLOS

  for (k = 1; k <= ciclos; k++)
  {
    for (i = 0; i < nL; i++)
    {
      for (j = 0; j < nC; j++)
      {
        vivos = 0;
        mortos = 0;

        if ((i >= 1 && i < nL - 1) && (j >= 1 && j < nC - 1)) ///MIOLO (8 VIZINHOS)
        {
          aux[i - 1][j - 1] == ORG ? vivos++ : mortos++;
          aux[i - 1][j] == ORG ? vivos++ : mortos++;
          aux[i - 1][j + 1] == ORG ? vivos++ : mortos++;
          aux[i][j - 1] == ORG ? vivos++ : mortos++;
          /*aux[i][j] PRÓPRIA CÉLULA*/
          aux[i][j + 1] == ORG ? vivos++ : mortos++;
          aux[i + 1][j - 1] == ORG ? vivos++ : mortos++;
          aux[i + 1][j] == ORG ? vivos++ : mortos++;
          aux[i + 1][j + 1] == ORG ? vivos++ : mortos++;

          mortoVivo(aux, vivos, mortos, i, j);
        }

        else if ((i >= 0 && i <= nL - 1) && (j >= 0 && j <= nC - 1)) ///BORDAS (3 OU 5 VIZINHOS)
        {
          ///QUINAS (3 VIZINHOS)
          if (i == 0 && j == 0) //SUPERIOR ESQUERDA
          {
            aux[0][1] == ORG ? vivos++ : mortos++;
            aux[1][0] == ORG ? vivos++ : mortos++;
            aux[1][1] == ORG ? vivos++ : mortos++;
            mortoVivo(aux, vivos, mortos, i, j);
          }
          else if (i == 0 && j == nC - 1) //SUPERIOR DIREITA
          {
            aux[0][nC - 2] == ORG ? vivos++ : mortos++;
            aux[1][nC - 2] == ORG ? vivos++ : mortos++;
            aux[1][nC - 1] == ORG ? vivos++ : mortos++;
            mortoVivo(aux, vivos, mortos, i, j);
          }
          else if (i == nL - 1 && j == 0) //INFERIOR ESQUERDA
          {
            aux[nL - 2][0] == ORG ? vivos++ : mortos++;
            aux[nL - 2][1] == ORG ? vivos++ : mortos++;
            aux[nL - 1][1] == ORG ? vivos++ : mortos++;
            mortoVivo(aux, vivos, mortos, i, j);
          }
          else if (i == nL - 1 && j == nC - 1) //INFERIOR DIREITA
          {
            aux[nL - 2][nC - 2] == ORG ? vivos++ : mortos++;
            aux[nL - 2][nC - 1] == ORG ? vivos++ : mortos++;
            aux[nL - 2][nC - 1] == ORG ? vivos++ : mortos++;
            mortoVivo(aux, vivos, mortos, i, j);
          }

          /// LATERAIS (5 VIZINHOS)
          else if ((i >= 0 && i <= nL - 1) && (j >= 0 && j <= nC - 1))
          {
            //L-SUPERIOR
            if ((i == 0) && (j >= 1 && j <= nC - 2))
            {
              aux[i][j - 1] == ORG ? vivos++ : mortos++;
              aux[i][j + 1] == ORG ? vivos++ : mortos++;
              aux[i + 1][j - 1] == ORG ? vivos++ : mortos++;
              aux[i + 1][j] == ORG ? vivos++ : mortos++;
              aux[i + 1][j + 1] == ORG ? vivos++ : mortos++;
              mortoVivo(aux, vivos, mortos, i, j);
            }

            //L-ESQUERDA
            else if ((i >= 1 && i <= nL - 2) && (j == 0))
            {
              aux[i - 1][j] == ORG ? vivos++ : mortos++;
              aux[i - 1][j + 1] == ORG ? vivos++ : mortos++;
              aux[i][j + 1] == ORG ? vivos++ : mortos++;
              aux[i + 1][j] == ORG ? vivos++ : mortos++;
              aux[i + 1][j + 1] == ORG ? vivos++ : mortos++;
              mortoVivo(aux, vivos, mortos, i, j);
            }

            //L-DIREITA
            else if ((i >= 1 && i <= nL - 2) && (j == nC - 1))
            {
              aux[i - 1][j - 1] == ORG ? vivos++ : mortos++;
              aux[i - 1][j] == ORG ? vivos++ : mortos++;
              aux[i][j - 1] == ORG ? vivos++ : mortos++;
              aux[i + 1][j - 1] == ORG ? vivos++ : mortos++;
              aux[i + 1][j + 1] == ORG ? vivos++ : mortos++;
              mortoVivo(aux, vivos, mortos, i, j);
            }

            //L-INFERIOR
            else if ((i == nL - 1) && (j >= 1 && j <= nC - 2))
            {
              aux[i - 1][j - 1] == ORG ? vivos++ : mortos++;
              aux[i - 1][j] == ORG ? vivos++ : mortos++;
              aux[i - 1][j + 1] == ORG ? vivos++ : mortos++;
              aux[i][j - 1] == ORG ? vivos++ : mortos++;
              aux[i][j + 1] == ORG ? vivos++ : mortos++;
              mortoVivo(aux, vivos, mortos, i, j);
            }
          }
        }
      }
    }
    printf("*CICLO %d*\n\n", k);
    imprimeMatriz(aux, nL, nC);
    Sleep(1000);   // pausa a execução por 1 segundo
    system("cls"); // limpa a tela (APÓS CADA CICLO)
  }

  ////fim do laco de repeticao para jogar TOTAL DE CICLOS

  printf("FIM DO JOGO!\n\n");

  desalocaMatriz(aux, nL);
}