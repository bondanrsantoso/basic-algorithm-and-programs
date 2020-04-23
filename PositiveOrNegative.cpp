#include <iostream>
#include "pause.h"

using namespace std;

int main() 
{
    int number;

    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    if(number < 0) 
    {
        cout << "Bilangan " << number << " merupakan bilangan negatif\n";
    }
    else if(number > 0) 
    {
        cout << "Bilangan " << number << " merupakan bilangan positif\n";
    }
    else
    {
        cout << "Bilangan 0\n";
    }

    pause();
    return 0;
}