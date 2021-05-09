#include <stdio.h>

void imprimeLoading()
{
  int i;

  Sleep(500);

  for (i = 0; i < 100; i++)
  {
    printf("\rLoading... %d %%", i);
    Sleep(25);
    fflush(stdout);
  }

  printf("\n");
}