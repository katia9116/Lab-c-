#include <iostream>
using namespace std;

const int DivideByZero = 111;  // спеціальне число для позначення помилки

// Функція, яка може ВИКИНУТИ виняток
float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0) {          // якщо ділення на нуль
        throw DivideByZero;     // ВИКИДАЄМО виняток (число 111)
    }
    return arg1 / arg2;          // інакше ділимо
}

// Головна функція ділення
void div(float arg1, float arg2) {
    cout << internaldiv(arg1, arg2) << endl;
}

int main() {
    float a, b;
    
    while (cin >> a >> b) {     // поки користувач вводить числа
        try {                    // ПОЧИНАЄМО БЛОК, ДЕ МОЖЕ БУТИ ПОМИЛКА
            div(a, b);           // пробуємо поділити
        }
        catch (int e) {          // ЛОВИМО виняток (якщо хтось викинув int)
            if (e == DivideByZero) {
                cout << "Are you kidding me? You can't divide by zero!" << endl;
            }
        }
    }
    
    return 0;
}