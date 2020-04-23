#include <iostream>
#include <stdio.h>
#include <cstdlib>
#ifdef _WIN32
    #include <conio.h>
#endif
// #include <conio.h>
using namespace std;

int main(){
    char input;
    do{
        cout << "AAAAAAAAA" << endl;
        cin >> input;

        #ifdef _WIN32
            clrscr();
        #else
            system("clear");
        #endif
    } while (input != 'x');

    return 0;
}