#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (y != 0)
    {
        cout << x/y;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}