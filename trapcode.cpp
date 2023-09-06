#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                return 1; // Возврат с ошибкой
            }
            break;
        default:
            cout << "Ошибка: недопустимая операция!" << endl;
            return 1; // Возврат с ошибкой
    }

    cout << "Результат: " << result << endl;

    return 0; // Возврат без ошибок
}
