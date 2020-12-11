#include <iostream>
using namespace std;
int main()
{
    int n,d;//Выделили память
    cin>>n;
    d = n / 2;
    //Back
    for (int i = 1; i<= d; i++)
    {
        cout<<" "<<endl;
    }
    for (int i = 1; i <= n;i++)
    {
        cout<<"* ";
    }
    cout<<"\n"<<endl;
    //Up
    for(int i = 1;i <= d-1; i++)
    {
        for (int j = 1; j < d-i; j++)
        {
            cout<<" "<<endl;
        }
        cout<<"* "<<endl;
        for (int j =1; j <n-1; j ++)
        {
            cout<<" "<<endl;
        }
        cout<<"*"<<endl;
        cout<<"\n"<<endl;
    }
    // Front
    






    return 0;
}