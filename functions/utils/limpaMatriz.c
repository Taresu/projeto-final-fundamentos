#define VAZ ' '

void limpaMatriz(char **m, int nL, int nC)
{
  int i, j;
  for (i = 0; i < nL; i++)
    for (j = 0; j < nC; j++)
      m[i][j] = VAZ;
}