// Money.h 
// ���������� ���� � ���������� �����
#pragma once
class Money
{
    int first; // ������ ������
    int second; // ������� �����
public:
    bool Init(int, int);
    void Read();
    void Display() const;
    int summa() const;
};