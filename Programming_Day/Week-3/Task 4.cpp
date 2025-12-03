#include <iostream>
using namespace std;

int main() {
    int i, p;
    cout << "Enter number of Imposters: ";
    cin >> i;

    cout << "Enter number of Players: ";
    cin >> p;

    if (p == 0) {
        cout << "Invalid input! Players cannot be zero." << endl;
    } else {
        int chance = (100 * i) / p;
        cout << "Chance of being an Imposter = " << chance << "%" << endl;
    }

    return 0;
}
