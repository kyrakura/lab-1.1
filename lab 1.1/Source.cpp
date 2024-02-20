// Source.cpp 
// головний файл проекту – функція main
#include "Money.h"
#include <iostream>
#include <Windows.h>
using namespace std;

Money makeMoney(int x, int y)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Money m;
    if (!m.Init(x, y))
        cout << "Неправильні аргументи для Init!" << endl;
    return m;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Money m;
    m.Read();
    m.Display();
    cout << "Загальна сума: " << m.summa() << endl << endl;
    int x, y;
    cout << "Введіть номінальну вартість грошей:" << endl << endl;
    cout << "Номінальний ="; cin >> x;
    cout << "Введіть кількість банкнот:"; cin >> y;
    m = makeMoney(x, y);
    m.Display();
    cout << "Загальна сума: " << m.summa() << endl;
    cin.get();
    return 0;
}