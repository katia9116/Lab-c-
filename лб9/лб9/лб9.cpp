/*

//ЗАВДАННЯ 3: Змінити місцями найбільший і найменший елементи заданого масиву
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0)); // ініціалізація генератора випадкових чисел

    // Заповнення масиву випадковими числами від 1 до 100
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    // Пошук індексів мінімального і максимального елементів
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    // Обмін значень
    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    return 0;
}

*/

/*

//ЗАВДАННЯ 4: Ввести число A і порахувати кількість елементів масиву, більших за A
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50; // числа від 0 до 49
    }

    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    int A;
    cout << "Enter number A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > A) count++;
    }

    cout << "Number of elements greater than " << A << " = " << count << endl;
    system("pause");

    return 0;
}

*/

/*

//ЗАВДАННЯ 5: Надрукувати другий по величині елемент масиву
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    // Пошук найбільшого і другого найбільшого
    int max1 = -1, max2 = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "Second largest element = " << max2 << endl;
    system("pause");

    return 0;
}

*/

/*

//ЗАВДАННЯ 6: Надрукувати індекс першого нульового елемента або повідомлення, що його немає
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 5; // числа від 0 до 4
    }

    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            cout << "Index of first zero element = " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Array does not contain any zero elements." << endl;
    }

    system("pause");
    return 0;
}

*/