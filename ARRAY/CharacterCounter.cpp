#include <stdio.h>
int main()
{
  char kalimat[100] = "Saya adalah anak UM Teknik Elektro PTI 2014 ";
  int hitung = 0, i;
  for (i = 0; kalimat[i] != '\0'; i++)
  {
    hitung++;
  }
  printf("Kalimat %s mempunyai %i huruf", kalimat, hitung);
  printf("\ndan disimpan dalam %i bytes\n", hitung + 1);

  return 0;
}
