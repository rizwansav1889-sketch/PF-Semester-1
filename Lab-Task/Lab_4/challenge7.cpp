#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "=== Inverse Calculator ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+')
        result = num1 - num2; // inverse of add is subtract
    else if (op == '-')
        result = num1 + num2; // inverse of subtract is add
    else if (op == '*')
        result = num1 / num2; // inverse of multiply is divide
    else if (op == '/')
        result = num1 * num2; // inverse of divide is multiply
    else {
        cout << "Invalid operator!" << endl;

    }

    cout << "Result: " << result << endl;
    return 0;
}
