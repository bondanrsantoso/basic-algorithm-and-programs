#include <iostream>
using namespace std;

int main() {
    char pill;
    
    cout << "THE MATRIX" << endl;
    cout << "==========" << endl;

    cout << "Morpheus: If You choose the (r)ed pill, You will see the truth\n";
    cout << "Morpheus: If You choose the (b)lue pill, Your life will return to normal\n";

    cout << "Neo: *choose (r/b)* ";
    cin >> pill;

    if (pill == 'b'){
        cout << "You are teleported to another simulation. Your soul is pretty much DEAD\n";
        cout << "GAME OVER\n";
    } else if (pill == 'r'){
        cout << "Morpheus: You have chosen your path, now see this\n";
        cout << "*Morpheus shows you the truth\n";
        cout << "THE END\n";
    } else {
        cout << "You decided to not choose either pill\n";
        cout << "Morpheus orders other crew to kill you promptly\n";
        cout << "GAME OVER\n";
    }

    cout << "You have chosen " << pill << endl;

    return 0;
}