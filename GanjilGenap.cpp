#include <iostream>
#include "pause.h"
using namespace std;

int main()
{
    int number;

    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "Bilangan Genap!" << endl;
    } else {
        cout << "Bilangan Ganjil!" << endl;
    }
    pause();
    return 0;
}