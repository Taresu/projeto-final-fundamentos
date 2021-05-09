char **alocaMatriz(int nL, int nC)
{
  int i;
  char **m;

  m = (char **)malloc(nL * sizeof(char *));

  for (i = 0; i < nL; i++)
    m[i] = (char *)malloc(nC * sizeof(char));

  return m;
}