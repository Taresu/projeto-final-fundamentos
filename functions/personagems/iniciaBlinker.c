#define ORG 'X'

void iniciaBlinker(char **m, int nL, int nC)
{
  char padrao[1][3] = {{ORG, ORG, ORG}};
  int i, j, xInic = nL / 2, yInic = nC / 2;

  limpaMatriz(m, nL, nC);

  for (i = 0; i < 1; i++)
    for (j = 0; j < 3; j++)
      m[xInic + i][yInic + j] = padrao[i][j];
}