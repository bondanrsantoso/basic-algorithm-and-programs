#include <iostream>

using namespace std;

int main()
{
  int a, x, kkm, remidi = 0;
  cout << "Masukkan Jumlah Siswa : ";
  cin >> x;

  int nilai[x];

  for (a = 0; a < x; a++)
  {
    cout << "\t Nilai siswa ke-" << a + 1 << " : ";
    cin >> nilai[a];
  }
  cout << "Semua nilai yang diinput adalah :" << endl;

  for (a = 0; a < x; a++)
  {
    cout << nilai[a] << "\t";
  }
  cout << "\n Masukkan nilai KKM : ";
  cin >> kkm;
  cout << "===============================================" << endl;

  for (a = 0; a < x; a++)
  {
    if (nilai[a] < kkm)
    {
      remidi += 1;
    }
  }
  cout << "Jumlah Siswa yang remidi adalah : " << remidi;

  return 0;
}
