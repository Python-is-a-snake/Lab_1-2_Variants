#include <iostream>
using namespace std;

//A function that checks whether a number is perfect
bool is_perfect(int num)
{
    int sum = 0;
    for (int d = num / 2; d >= 1; --d)
        if (num % d == 0)
            sum += d;
    return sum == num;//Return True or False
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Number " << (is_perfect(num) ? "is" : "is not ") << "perfect" << endl;
    return 0;
}
