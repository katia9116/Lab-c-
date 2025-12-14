/*
//ЗАВДАННЯ 1: Задати одномірний масив цілих чисел m = 12. Упорядкувати його зростанням та спаданням.
#include <iostream>
#include <algorithm> // для sort()
#include <cstdlib>   // для system("pause")

using namespace std;

int main() {
    const int size = 12;
    int m[size] = {5, 12, -3, 7, 0, 9, 4, 1, -8, 6, 11, 2};

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    system("pause");

    // Сортування за зростанням
    sort(m, m + size);
    cout << "Sorted in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    system("pause");

    // Сортування за спаданням
    sort(m, m + size, greater<int>());
    cout << "Sorted in descending order: ";
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    system("pause");

    return 0;
}

*/

/*

//ЗАВДАННЯ 2: Замінити нулями всі від’ємні елементи заданого не порожнього масиву, що передують його першому максимальному елементу.
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {-4, 3, -7, 2, 9, -1, 9, 0, 5, -6};

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    // Знаходимо перший максимальний елемент
    int maxVal = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
            break; // перший максимум
        }
    }

    // Замінюємо нулями всі від’ємні елементи перед першим максимумом
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    return 0;
}

*/