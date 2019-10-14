#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(0, "russian");
    cout << "Введіть x для обчислення e^x: ";
    float x; //Змінна для збреження значення в яку степінь підносимо
    cin >> x;
    float adding = 1; //Зміна, яка буде зберігати доданок після маніпуляції, який ми будемо додавати до число.
    float number = 0;//Ініціалізуємо число до якого будемо додавати adding. Тут зберігається кінцевий результат.
    int counter = 1;//Дізнаємося скільки кіл циклу пройшло для факторіалу.
    bool minus = false;
    if (x < 0) {
        minus = true;
        x = -x;
    }
    while (adding >= 0.00001) {
        number += adding;
        adding *= x;
        adding = adding / (static_cast<float>(counter));
        cout << "Доданок дорівнює: " << setw(10) << fixed << setprecision(6) << adding << endl;
        counter++;
    }
    if (minus) {
        number = 1 / number;
    }
    cout << "e^x = " << fixed << setprecision(4) << number;
    return 0;
}