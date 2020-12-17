#include <iostream> 
#include <cmath>
using namespace std;
int n;
float z;
bool flag=false;
int sum=0;
int main()
{
    cout << "Enter amout: ";
    cout << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    cout << endl;
    cout << "Enter the number to compare: ";
    cout << endl;
    cin >> z;
    for (int i=1; i<n; i++)
    {
        if (sin(n+i/n)==z)
        {
            flag=true;
            break;
        }
    }
    if (flag==true)
    {
        cout << "There is such an element";
    }   
    else
    {
        cout << "There is no such element";
    }
    return 0;
}