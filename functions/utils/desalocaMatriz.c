void desalocaMatriz(char **m, int nL)
{
  int i;

  for (i = 0; i < nL; i++)
    free(m[i]);

  free(m);
}
