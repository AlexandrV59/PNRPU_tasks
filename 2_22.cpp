#include <iostream> 
#include <cmath>
using namespace std;
float n;
int number;
float maxi = INT_MIN;
int main()
{

    cout << "Enter: ";
    cout << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    for (int i=1; i<=n; i++)
    {
        if ((sin(n+i/n)) >= maxi)
        {   
            maxi = sin(n+i/n);
            number = i;
        }
    }
    cout << number << " " << maxi;
    return 0;
}