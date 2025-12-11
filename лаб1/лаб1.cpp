// лаб1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
// 
int main() {
    double a = 2.0;
    double b = 11.05;

    double t = exp(pow(a, 2)) + 2 * sin(M_PI * a) + 2 * cos(M_PI * b);
    double y = 30.1 * log(t);

    cout << "Результат: y = " << y << endl;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/