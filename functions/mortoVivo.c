#define VAZ ' '
#define ORG 'X'

void mortoVivo(char **aux, int vivos, int mortos, int i, int j)
{
  if (vivos == 3 || (vivos == 2 && aux[i][j] == ORG)) ///Célula nasce ou continua viva
    aux[i][j] = ORG;

  else ///Célula morre ou não nasce
    aux[i][j] = VAZ;
}