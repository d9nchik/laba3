#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(0, "russian");
    cout << "Введіть x для обчислення e^x: ";
    float x;
    cin >> x;
    float adding = 1;
    float number = 0;
    int counter = 1;
    while (adding >= 0.0001) {
        number += adding;
        adding *= x;
        adding = adding / (static_cast<float>(counter));
        cout << "Доданок дорівнює: " << setw(10) << fixed << setprecision(6) << adding << endl;
        counter++;
    }
    cout << "e^x = " << number;
    return 0;
}