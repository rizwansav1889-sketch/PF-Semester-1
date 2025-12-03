#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of sides of polygon: ";
    cin >> n;

    if (n < 3) {
        cout << "Invalid input! Polygon must have at least 3 sides." << endl;
    } else {
        int sum = (n - 2) * 180;
        cout << "Sum of internal angles = " << sum << " degrees" << endl;
    }

    return 0;
}
