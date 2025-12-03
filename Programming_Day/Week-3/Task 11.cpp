#include <iostream>
using namespace std;

int main() {
    int age, moves;
    float average;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter number of times you moved house: ";
    cin >> moves;

    average = (float)age / (moves + 1);
    cout << "Average years spent in each house: " << average << endl;

}
