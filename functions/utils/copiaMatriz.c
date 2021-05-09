void copiaMatriz(char **m, char **aux, int nL, int nC)
{
  int i, j;

  for (i = 0; i < nL; i++)
    for (j = 0; j < nC; j++)
      aux[i][j] = m[i][j];
}