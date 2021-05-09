#define VAZ ' '
#define ORG 'X'

void iniciaGlider(char **m, int nL, int nC)
{
  char padrao[3][3] = {{ORG, ORG, ORG}, {ORG, VAZ, VAZ}, {VAZ, ORG, VAZ}};
  int i, j, xInic, yInic;

  limpaMatriz(m, nL, nC);

  xInic = nL - 4;
  yInic = nC - 4;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      m[xInic + i][yInic + j] = padrao[i][j];
}