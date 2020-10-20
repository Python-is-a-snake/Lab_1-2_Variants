#include <iostream>
using namespace std;

//Функция для перевода числа с 10 системы в систему m (m<10)
void perevod(){
    int m, chislo, ostacha;
    setlocale(LC_ALL, "Russian");
    cout << "Введите основу системы исчисления m(m<0): ";
    cin >> m;
    cout <<endl<< "Введите число: ";
    cin >> chislo;

    int index = 1;
    int size = 1;
    int *arrayOfNumbers = new int [size];


    //Проверка на корректность системы исчисления
    if (m == 2 || m == 8) {
        do {
            ostacha = chislo % m;//Находим остачу от деления числа на основу m
            //cout << ostacha;//Вывод цифры
            arrayOfNumbers[index]=ostacha;
            chislo /= m;//Делим число на основу системы m
            index++;
            size++;
            if (chislo <= m)cout << chislo, size++;//Если число меньше или равно основе, выводим это число
        } while (chislo >= m);//Выполняем цикл пока число больше или равно основе

    } else cout<<"Некорректный ввод(Доступны только системы исчисления с основой 2 или 8)";

    for(int i=0;i <= size; i++){
        cout << arrayOfNumbers[i];
    }

    delete [] arrayOfNumbers;
}




int main(){
    perevod();
    return 0;
}