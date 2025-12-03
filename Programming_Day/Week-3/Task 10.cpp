#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1, subtraction = 0;

    cout << "Enter 15 numbers:\n";

    for (int i = 1; i <= 15; i++) {
        cin >> num;
        if (i <= 5)
            sum += num;
        else if (i <= 10)
            product *= num;
        else if (i == 11)
            subtraction = num;
        else
            subtraction -= num;
    }

int finalResult = (sum + product) - subtraction;
    cout << "Final result: " << finalResult << endl;

}
