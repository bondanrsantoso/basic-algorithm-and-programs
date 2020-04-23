#include <stdio.h>
#ifdef WIN32
#include <conio.h>
#endif
//#include <string.h>
int main()
{
  //int h=64;
  char nama[5][4][20] = {{"AC_Milan", "Barcelona", "Porto", "Monaco"},
                         {"Liverpool", "Real Madrid", "CSK_Moskow", "PSG"},
                         {"Inter_Milan", "Arsenal", "Atletico_Madrid", "Ajax"},
                         {"As_Roma", "Manchester_United", "Dortmund", "Valencia"},
                         {"Manchester_City", "Bayern_Munich", "Napoli", "Vilareal"}};
  printf("Liga Champions : \n\n");
  for (int i = 0; i < 5; i++)
  {
    //++h;
    printf("Grup %d \n", i + 1);

    for (int s = 0; s < 4; s++)
    {
      printf("%d. %s \n", s + 1, nama[i][s]);
    }
    printf("\n");
  }

#ifdef WIN32
  getch();
#endif
  return 0;
}
