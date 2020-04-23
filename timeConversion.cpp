#include <iostream>
using namespace std;

int main() {
    int seconds, hours, minutes;

    cout << "Program konversi Nilai Waktu\n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    // cout << "Masukkan nilai waktu dalam detik: ";
    // cin >> seconds;
    // cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    // cout << seconds / 3600 << " jam ";
    // seconds = seconds % 3600;
    // cout << seconds / 60 << " menit " << seconds % 60 << " detik." << endl;
    cout << "Masukkan jam: ";
    cin >> hours;
    cout << "Masukkan menit: ";
    cin >> minutes;
    cout << "Masukkan detik: ";
    cin >> seconds;

    seconds += hours * 3600 + minutes * 60;
    cout << " = " << seconds << " detik" << endl;

    return 0;
}