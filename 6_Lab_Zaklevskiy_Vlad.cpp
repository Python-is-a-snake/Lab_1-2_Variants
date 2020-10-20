#include <iostream>
using namespace std;

void conv(){
    int num, sys, num2=0, i;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the base (2 or 8): ";
    cin >> sys;
    if (sys == 2 || sys == 8) {
        for(i = 0; num >= sys-1; i++)
        {
            num2 += (num%sys)*pow(10, i);//Calculating the number
            num /= sys;
        }
        num2 += num*pow(10, i++);
        cout << "The number in base: " <<num2 << endl;
    }
    else
        cout << "Incorrect enter :(";
}

int main(){
    conv();
    return 0;
}
