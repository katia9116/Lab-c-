/*
//ЗАВДАННЯ 1: Визначити кількість парних чисел у кожному рядку
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 3;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    for (int i = 0; i < m; i++) {
        int evenCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) evenCount++;
        }
        cout << "Row " << i << " has " << evenCount << " even numbers." << endl;
    }
    system("pause");
    return 0;
}
*/

/*
//ЗАВДАННЯ 2: Визначити кількість парних чисел у кожному стовпчику
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 6, n = 4;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    for (int j = 0; j < n; j++) {
        int evenCount = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] % 2 == 0) evenCount++;
        }
        cout << "Column " << j << " has " << evenCount << " even numbers." << endl;
    }
    system("pause");
    return 0;
}
*/
/*
//ЗАВДАННЯ 3: Обчислити суму елементів кожного рядка
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 5, n = 7;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }
    system("pause");
    return 0;
}
*/
/*
//ЗАВДАННЯ 4: Обчислити суму елементів кожного стовпчика
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 6;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " = " << sum << endl;
    }
    system("pause");
    return 0;
}
*/
/*
//ЗАВДАННЯ 5: Знайти максимальний елемент і його позицію
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 3, n = 4;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    int maxVal = arr[0][0], maxRow = 0, maxCol = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Max value = " << maxVal << " at position [" << maxRow << "][" << maxCol << "]" << endl;
    system("pause");
    return 0;
}
*/
/*
//ЗАВДАННЯ 6: Знайти мінімальний елемент і його позицію
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 4, n = 7;
    int arr[m][n];

    srand(time(0));

    cout << "Generated array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    int minVal = arr[0][0], minRow = 0, minCol = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Min value = " << minVal << " at position [" << minRow << "][" << minCol << "]" << endl;
    system("pause");
    return 0;
}
*/
/*
//ЗАВДАННЯ 15: Задати двомірний масив m * n цілих чисел m = 3, n = 3.
//Обчислити суму чисел по діагоналям.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int m = 3, n = 3;
    int arr[m][n];

    srand(time(0)); // ініціалізація генератора випадкових чисел

    // Заповнення масиву випадковими числами
    cout << "Generated 3x3 array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 50; // числа від 0 до 49
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");

    // Обчислення суми по головній діагоналі
    int mainDiagSum = 0;
    for (int i = 0; i < m; i++) {
        mainDiagSum += arr[i][i];
    }

    // Обчислення суми по побічній діагоналі
    int secondaryDiagSum = 0;
    for (int i = 0; i < m; i++) {
        secondaryDiagSum += arr[i][m - 1 - i];
    }

    cout << "Sum of main diagonal = " << mainDiagSum << endl;
    cout << "Sum of secondary diagonal = " << secondaryDiagSum << endl;
    system("pause");

    return 0;
}
*/