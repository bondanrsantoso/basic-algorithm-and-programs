#include <iostream>
#ifdef WIN32
#include <conio.h>
#endif
#include <string>

using namespace std;
int main()
{
  char ulang, kata[100];
  cout << "|=================================|\n";
  cout << "|     Pembalik Kata & Kalimat     |\n";
  cout << "|=================================|\n";
  cout << "\nMasukkan Kata yang Akan Dibalik: ";
  cin.getline(kata, sizeof(kata));
  cout << "\nHasil Pembalikan               : ";
  for (int i = strlen(kata) - 1; i >= 0; i--)
  {
    cout << kata[i];
  }
  cout << "\n";
#ifdef WIN32
  getch();
#endif
  return 0;
}
