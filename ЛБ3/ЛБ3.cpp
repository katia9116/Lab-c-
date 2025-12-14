// ЛБ3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//ЗАВДАННЯ 1

/*
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit number N:";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "The number is not three digits!" << endl;
        return 0;
    }
    
    int a = N / 100;          // сотні
    int b = (N / 10) % 10;    // десятки
    int c = N % 10;           // одиниці

    int suma = 0;
	// Перевірка кожної цифри і додавання до суми, якщо вона менша за 7
    if (a < 7) suma += a;
    if (b < 7) suma += b;
    if (c < 7) suma += c;
	// sum of digits less than 7  це сума цифр менших за 7
    cout << "Sum of digits less than 7 = " << suma << endl;
	system("pause");
    return 0;
}
*/
/*
ЗАВДАННЯ 2

#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Введіть першу літеру назви країни (A–Z): ";
    cin >> letter;

    switch (letter) {
    case 'U':
    case 'u':
        cout << "Україна — столиця Київ, населення ~37 млн" << endl;
        break;
    case 'P':
    case 'p':
        cout << "Польща — столиця Варшава, населення ~38 млн" << endl;
        break;
    case 'F':
    case 'f':
        cout << "Франція — столиця Париж, населення ~65 млн" << endl;
        break;
    case 'G':
    case 'g':
        cout << "Німеччина — столиця Берлін, населення ~84 млн" << endl;
        break;
    case 'I':
    case 'i':
        cout << "Італія — столиця Рим, населення ~59 млн" << endl;
        break;
    case 'S':
    case 's':
        cout << "Іспанія — столиця Мадрид, населення ~48 млн" << endl;
        break;
    case 'C':
    case 'c':
        cout << "Канада — столиця Оттава, населення ~40 млн" << endl;
        break;
    default:
        cout << "Країну не знайдено!" << endl;
    }

    return 0;
}
*/