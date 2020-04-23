#include <iostream>
#ifdef _WIN32
    #include <conio.h>
#endif

void pause() {
    #ifdef _WIN32
        getch();
        return;
    #endif
    system("read -n 1 -s -r -p \"\"");
}