#include <iostream>
using namespace std;

int main()
{
    int *ptr; //Объявить указатель на инт
    cout<<*ptr <<endl;//Вывод до присвоения зн
    int var = 21;//Инициализация var
    int *ptr1 = &var;
    cout<<ptr1<<endl;//Выводим ptr   
    cout<<*ptr1<<endl;//Выводим значение 
    delete ptr1;//Удаляем
    cout<<*ptr1<<endl;//Крашим 










    return 0;
}