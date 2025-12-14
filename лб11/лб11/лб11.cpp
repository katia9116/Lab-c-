/*

//ЗАДАЧА 1: Ввести години, хвилини і кількість хвилин, що додаються. Вивести новий час.
#include <iostream>
#include <cstdlib> // для system("pause")
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date time;
    int addMinutes;

    cout << "Enter hours (0–23): ";
    cin >> time.hours;
    cout << "Enter minutes (0–59): ";
    cin >> time.minutes;
    cout << "Enter minutes to add: ";
    cin >> addMinutes;

    // Перевірка коректності введених значень
    if (time.hours < 0 || time.hours > 23 || time.minutes < 0 || time.minutes > 59 || addMinutes < 0) {
        cout << "Invalid input!" << endl;
        system("pause");
        return 1;
    }

    // Перетворення всього часу в хвилини
    int totalMinutes = time.hours * 60 + time.minutes + addMinutes;

    // Обчислення нового часу
    Date newTime;
    newTime.hours = (totalMinutes / 60) % 24;
    newTime.minutes = totalMinutes % 60;

    cout << "New time: " << newTime.hours << ":" << newTime.minutes << endl;
    system("pause");

    return 0;
}
*/

/*
//ЗАДАЧА 2: Ввести час початку і завершення події. Вивести тривалість.
#include <iostream>
#include <cstdlib>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date start, end;

    cout << "Enter start time (hours and minutes): ";
    cin >> start.hours >> start.minutes;
    cout << "Enter end time (hours and minutes): ";
    cin >> end.hours >> end.minutes;

    // Перевірка коректності введених значень
    if (start.hours < 0 || start.hours > 23 || start.minutes < 0 || start.minutes > 59 ||
		end.hours < 0 || end.hours > 23 || end.minutes < 0 || end.minutes > 59) { // перевірка коректності введених значень
		cout << "Invalid input!" << endl; // повідомлення про некоректне введення
        system("pause");
        return 1;
    }

    // Перетворення часу в хвилини
    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    // Якщо кінець менший за початок — подія перейшла через північ
    if (endTotal < startTotal) {
        endTotal += 24 * 60;
    }

    int duration = endTotal - startTotal;
    int durHours = duration / 60;
    int durMinutes = duration % 60;

    cout << "Duration: " << durHours << ":" << durMinutes << endl;
    system("pause");

    return 0;
}
*/