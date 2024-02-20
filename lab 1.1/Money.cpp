// Money.cpp 
// ���� ��������� � ��������� ������ �����
#include "Money.h"
#include <iostream>
#include <Windows.h>
using namespace std;

bool Money::Init(int x, int y)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    if (x == 1 || x == 2 || x == 5 || x == 10 || x == 20 || x == 50 || x == 100 || x == 200 || x == 500)
    {
        first = x;
        second = y;
        return true;
    }
    else
    {
        cout << "������������ ������ ���� �� �����!" << endl;
        return false;
    }
}

void Money::Read()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x, y;
    do
    {
        cout << "������ ��������� ������� ������:" << endl;
        cout << "���������� ="; cin >> x;
        cout << "������ ������� �������:"; cin >> y;
    } while (!Init(x, y));
}

void Money::Display() const
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << endl;
    cout << "��������� ������� =" << first << endl;
    cout << "ʳ������ ������� =" << second << endl;
}

int Money::summa() const
{
    return first * second;
}