#include <iostream>
#include "pause.h"

using namespace std;

int main()
{
    int year;

    cout << "Masukkan sebuah Tahun: ";
    cin >> year;

    if (year % 4 == 0) 
    {
        cout << "Tahun " << year << " merupakan tahun Kabisat" << endl;
    }
    else 
    {
        cout << "Tahun " << year << " bukan tahun Kabisat" << endl;
    }

    pause();
    return 0;
}