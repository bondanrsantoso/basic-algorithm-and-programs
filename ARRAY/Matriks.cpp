#include "stdio.h"
#ifdef WIN32
#ifdef WIN32
#include <conio.h>
#endif
#endif
int main()
{
  int baris, kolom, matriks[3][4];
  //Input Elemen Secara Row Major Order
  printf("|========================|\n");
  printf("|   Input Elemen Array   |\n");
  printf("|========================|\n\n");
  for (baris = 0; baris < 3; baris++)
  {
    for (kolom = 0; kolom < 4; kolom++)
    {
      printf("Matriks[%i][%i]: ", baris + 1, kolom + 1);
      scanf("%i", &matriks[baris][kolom]);
    }
    printf("\n");
  }
  //Tampilan Elemen Array secara Row Major Order
  printf("|========================|\n");
  printf("|        Isi Array       |\n");
  printf("|========================|\n\n");
  for (baris = 0; baris < 3; baris++)
  {
    for (kolom = 0; kolom < 4; kolom++)
    {
      printf("%5.0i", matriks[baris][kolom]);
    }
    printf("\n");
  }
#ifdef WIN32
  getch();
#endif
}
