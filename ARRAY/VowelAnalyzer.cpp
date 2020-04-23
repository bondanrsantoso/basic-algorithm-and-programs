#include <iostream>
#ifdef WIN32
#include <conio.h>
#endif
#include <string.h>

using namespace std;
int main()
{
  char kata[100];
  int vokal = 0;
  int konsonan = 0;
  int jumlah = 0;

  cout << "Masukkan Sebuah Kata : ";
  cin >> kata;

  for (int i = 0; kata[i]; i++)
  {
    jumlah += 1;
  }

  for (int a = 0; a < jumlah; a++)
  {
    if (kata[a] == 'a' || kata[a] == 'i' || kata[a] == 'u' || kata[a] == 'e' || kata[a] == 'o' || kata[a] == 'A' || kata[a] == 'I' || kata[a] == 'U' || kata[a] == 'E' || kata[a] == 'O')
    {
      vokal += 1;
    }
    else
    {
      konsonan += 1;
    }
  }
  cout << "Jumlah Huruf Vokal : " << vokal << endl;
  cout << "Jumlah Huruf Konsonan : " << konsonan << endl;

  return 0;
}
