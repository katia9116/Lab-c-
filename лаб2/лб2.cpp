// завдання 1.cpp 

/*
#include <iostream>
#include <cmath>
// це функція Y
double Y(double x) {
    if (x >= 0) {
        return std::exp(-x + 2);
    }
    else {
        return std::exp(-x) * std::sin(1.0 / (x + 3.2));
    }
}
// Головна функція
int main() {
    double x;
    std::cout << "Enter x: ";
    std::cin >> x;

    double result = Y(x);
    std::cout << "Y(" << x << ") = " << result << std::endl;
    system("pause");
    return 0;
}
*/

/*

// ЗАВДАННЯ 2//
 #include <iostream>
#include <cmath>
using namespace std;
//  using namespace std це директива, яка дозволяє використовувати імена з простору імен std без префікса std::

int main() {
    double x, y;
    cout << "Enter (x, y): ";
    cin >> x >> y;
	// Перевірка належності точки за допомогою логічних виразів
    bool inCircle = (x <= 0 && y <= 0 && (x * x + y * y <= 1));
	// Перевірка належності точки трикутнику
    bool inTriangle = (x >= 0 && y >= 0 && y <= -x + 1);
   
    if (inCircle || inTriangle)
        cout << "Point (" << x << ", " << y << ") belongs to the shaded area." << endl;
    else
        cout << "Point (" << x << ", " << y << ") not belongs to the shaded area." << endl;
    system("pause");
    return 0;

}
*/