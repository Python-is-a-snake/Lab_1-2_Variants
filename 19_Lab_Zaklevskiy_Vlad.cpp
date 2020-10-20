#include <iostream>
using namespace std;

//Функція яка перевіряє чи є число досконалим
bool is_perfect(int num)
{
    int sum = 0;
    for (int d = num / 2; d >= 1; --d)
        if (num % d == 0)
            sum += d;
    return sum == num;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int num;
    cout << "Введіть число: ";
    cin >> num;
    cout << "Число " << (is_perfect(num) ? "є" : "не є ") << "досконалим" << endl;
    return 0;
}