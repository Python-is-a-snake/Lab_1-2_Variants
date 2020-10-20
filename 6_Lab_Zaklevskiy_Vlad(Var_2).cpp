#include <iostream>
using namespace std;

//Function for converting a number from system 10 to system m (m <10)
void converting(){
    int m, chislo, ostacha;
    cout << "Enter the base m(m<0): ";
    cin >> m;
    cout <<endl<< "Enter the number: ";
    cin >> chislo;

    int index = 1;
    int size = 1;
    int *arrayOfNumbers = new int [size];
    
    //Checking the correctness of the number system
    if (m == 2 || m == 8) {
        do {
            ostacha = chislo % m;//Find the remainder of dividing the number by the base m
            //cout << ostacha;
            arrayOfNumbers[-index]=ostacha;
            chislo /= m;
            index++;
            size++;
            if (chislo <= m)arrayOfNumbers[-index]=ostacha, size++;
        } while (chislo >= m);//Loop while the number is greater than or equal to the base

    } else cout<<"Incorrect entry (Only calculus systems with base 2 or 8 are available)";

    for(int i=0;i <= size; i++){
        cout << arrayOfNumbers[i];
    }

    delete [] arrayOfNumbers;
}

int main(){
    converting();
    return 0;
}
