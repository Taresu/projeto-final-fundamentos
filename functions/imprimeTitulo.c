void imprimeTitulo()
{
  printf("\n");

  Sleep(1000);
  printf("\n\n");

  Beep(100, 550);
  printf("\t\t                   ::::::::::: ::::::::   ::::::::   ::::::::  \n");
  printf("\t\t                       :+:    :+:    :+: :+:    :+: :+:    :+: \n");
  printf("\t\t                       +:+    +:+    +:+ +:+        +:+    +:+ \n");

  Beep(120, 550);
  printf("\t\t                       +#+    +#+    +:+ :#:        +#+    +:+ \n");
  printf("\t\t                       +#+    +#+    +#+ +#+   +#+# +#+    +#+ \n");

  Beep(140, 550);
  printf("\t\t                   #+# #+#    #+#    #+# #+#    #+# #+#    #+# \n");
  printf("\t\t                    #####      ########   ########   ########\n\n");

  Beep(100, 550);
  Beep(120, 550);
  Beep(140, 550);

  Sleep(500);
  printf("\t\t                              :::::::::      :::              \n");
  printf("\t\t                              :+:    :+:   :+: :+:            \n");

  Beep(160, 550);
  printf("\t\t                              +:+    +:+  +:+   +:+           \n");
  printf("\t\t                              +#+    +:+ +#++:++#++:          \n");
  printf("\t\t                              +#+    +#+ +#+     +#+          \n");

  Beep(180, 550);
  printf("\t\t                              #+#    #+# #+#     #+#          \n");
  printf("\t\t                              #########  ###     ###         \n\n");

  Beep(160, 550);
  Beep(180, 550);

  Sleep(500);
  printf("\t\t                   :::     ::: ::::::::::: :::::::::      :::   \n");
  printf("\t\t                   :+:     :+:     :+:     :+:    :+:   :+: :+:  \n");

  Beep(200, 550);
  printf("\t\t                   +:+     +:+     +:+     +:+    +:+  +:+   +:+ \n");
  printf("\t\t                   +#+     +:+     +#+     +#+    +:+ +#++:++#++:\n");

  Beep(220, 550);
  printf("\t\t                    +#+   +#+      +#+     +#+    +#+ +#+     +#+\n");
  printf("\t\t                     #+#+#+#       #+#     #+#    #+# #+#     #+#\n");
  printf("\t\t                       ###     ########### #########  ###     ###\n");

  Beep(200, 550);
  Beep(220, 550);
  Beep(240, 550);

  printf("\n\n");

  emiteBeep();

  imprimeLoading();

  emiteBeep();

  system("pause");
  system("cls");
}