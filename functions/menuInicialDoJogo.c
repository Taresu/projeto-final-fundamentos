void menuInicialDoJogo(char **mat, int nL, int nC)
{
  int opcao;

  emiteBeep();

  printf("                                          \n");
  printf("_/      _/  _/_/_/_/  _/      _/  _/    _/ \n");
  printf("_/_/  _/_/  _/        _/_/    _/  _/    _/  \n");
  printf("_/  _/  _/  _/_/_/    _/  _/  _/  _/    _/   \n");
  printf("_/      _/  _/        _/    _/_/  _/    _/    \n");
  printf("_/      _/  _/_/_/_/  _/      _/    _/_/     \n\n");

  printf("(1)Bloco (VIDA ETERNA)\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS");
  printf("      ____		                             \n");
  printf("            /___/\\__		                         \n");
  printf("           _\\   \\/_/\\__                             \n");
  printf("         __\\       \\/_/\\                            \n");
  printf("         \\   __    __ \\ \\                           \n");
  printf("        __\\  \\_\\   \\_\\ \\ \\   __                     \n");
  printf("       /_/\\\\   __   __  \\ \\_/_/\\                    \n");
  printf("       \\_\\/_\\__\\/\\__\\/\\__\\/_\\_\\/                    \n");
  printf("          \\_\\/_/\\       /_\\_\\/                      \n");
  printf("             \\_\\/       \\_\\/     \n\nEntre com a opcao: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    iniciaBloco(mat, nL, nC);
    system("cls");
    printf("\nBLOCO sera inicializado com o seguinte padrao:\n");
    break;
  case 2:
    iniciaBlinker(mat, nL, nC);
    system("cls");
    printf("\nBLINKER sera inicializado com o seguinte padrao:\n");
    break;
  case 3:
    iniciaSapo(mat, nL, nC);
    system("cls");
    printf("\nSAPO sera inicializado com o seguinte padrao:\n");
    break;
  case 4:
    iniciaGlider(mat, nL, nC);
    system("cls");
    printf("\nGLIDER sera inicializado com o seguinte padrao:\n");
    break;
  case 5:
    iniciaLWSS(mat, nL, nC);
    system("cls");
    printf("\nLWSS sera inicializado com o seguinte padrao:\n");
    break;
  }

  imprimeMatriz(mat, nL, nC);

  system("pause"); //informa e espera o usuário digitar qualquer tecla
  system("cls");   //limpa a tela (MENU) e inicia o jogo

  Sleep(1000);

  imprimeLoading();

  emiteBeep();
}