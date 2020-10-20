#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "Russian");
    int num, sys, num2=0, i;
    cout << "Введите число: ";
    cin >> num;
    cout << "Введите систему счисления(2 или 8): ";
    cin >> sys;
    if (sys == 2 || sys == 8) {
        for(i = 0; num >= sys-1; i++)
        {
            num2 += (num%sys)*pow(10, i);//Находим число
            num /= sys;
        }
        num2 += num*pow(10, i++);
        cout << "Число в этой системе счисления: " <<num2 << endl;//Вывод числа на экран
    }
    else
        cout << "Некорректный ввод";
    return 0;
}