// Money.h 
// заголовний файл Ц визначенн€ класу
#pragma once
class Money
{
    int first; // ном≥нал купюри
    int second; // к≥льк≥сть купюр
public:
    bool Init(int, int);
    void Read();
    void Display() const;
    int summa() const;
};