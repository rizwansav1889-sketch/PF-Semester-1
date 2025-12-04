#include <iostream>
#include <string>
using namespace std;

int main() {
    string figure;
    cout << "Enter figure type (square, rectangle, circle, triangle): ";
    cin >> figure;

    if (figure == "square") {
        double side;
        cout << "Enter side: ";
        cin >> side;
        double area = side * side;
        cout << area << endl;
    }
    else if (figure == "rectangle") {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        double area = l * w;
        cout << area << endl;
    }
    else if (figure == "circle") {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        double area = 3.14159 * r * r;
        cout << area << endl;
    }
    else if (figure == "triangle") {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        double area = 0.5 * base * height;
        cout << area << endl;
    }
    else {
        cout << "Invalid figure" << endl;
    }

    return 0;
}
