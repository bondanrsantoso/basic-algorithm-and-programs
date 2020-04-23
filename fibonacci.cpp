#include <iostream>
using namespace std;

int main() 
{
    int n, x = 0, y = 1, z;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < n ; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }

    cout << y << endl;
    return 0;
}