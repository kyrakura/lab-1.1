// Source.cpp 
// �������� ���� ������� � ������� main
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
        cout << "���������� ��������� ��� Init!" << endl;
    return m;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Money m;
    m.Read();
    m.Display();
    cout << "�������� ����: " << m.summa() << endl << endl;
    int x, y;
    cout << "������ ��������� ������� ������:" << endl << endl;
    cout << "���������� ="; cin >> x;
    cout << "������ ������� �������:"; cin >> y;
    m = makeMoney(x, y);
    m.Display();
    cout << "�������� ����: " << m.summa() << endl;
    cin.get();
    return 0;
}