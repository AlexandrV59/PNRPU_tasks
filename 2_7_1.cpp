// Программа выводит квадрат из n кол-ва звезд. Сначала вводится значение переменной "a" и сразу же считается корень из переменной "a" и присваевается переменной n.
// После этого запускатеся цикл, который работает n раз и каждый раз выводит символ "* ", а по достижению цикла j значения n, курсор скидывается на строку ниже.
// Цикл работает до тех пор, пока i не станет равным n.
#include <iostream>
#include <cmath>
using namespace std;
int a,n;
int main()
{
    cin >> a;
    n=sqrt(a);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
           cout << "* " ;
        }
        cout << "\n";
    }
    return 0;
}