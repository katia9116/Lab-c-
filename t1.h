#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 0, c = 0;
    cin >> b;
    
    try {
        if (b == 0) {                    // перевіряємо, чи ділять на нуль
            throw "error";
        }
        c = a / b;                       // ділимо (якщо b не 0)
    }
    catch (...) {                        // ловимо виняток
        cout << "Your input is not valid, you can't divide by zero." << endl;
        c = 0;                           // якщо помилка, c = 0
    }
    
    cout << c << endl;
    return 0;
}