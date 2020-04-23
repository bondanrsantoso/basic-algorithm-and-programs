#include <iostream>
#ifdef WIN32
#include <conio.h>
#endif
#include <iomanip>

using namespace std;

main()
{
  int in, b1 = 1, b2 = 1, h, i;
  cout << "Masukkan Input: ";
  cin >> in;
  cout << "\nBilangan Fibonanci: \n"
       << b1;
  for (i = 1; i <= in - 2; i++)
  {
    cout << setw(3) << b2;
    h = b1 + b2;
    b1 = b2;
    b2 = h;
  }
  cout << setw(3) << h;
#ifdef WIN32
  getch();
#endif

  return 0;
}
