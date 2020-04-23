#include <stdio.h>
#ifdef WIN32
#include <conio.h>
#endif
int main()
{
  int index, nilai[10];
  //input nilai mahasiswa
  printf("|=====================================|\n");
  printf("|      Input Nilai 10 Mahasiswa       |\n");
  printf("|=====================================|\n");
  for (index = 0; index < 10; index++)
  {
    printf("Mahasiswa %d: ", index + 1);
    scanf("%d", &nilai[index]);
  }
  //tampilan nilai mahasiswa
  printf("|=====================================|\n");
  printf("| Nilai Mahasiswa Yang Telah Diinput  |\n");
  printf("|=====================================|\n");
  for (index = 0; index < 10; index++)
  {
    printf("%5.0i", nilai[index]);
  }

#ifdef WIN32
  getch();
#endif
}
