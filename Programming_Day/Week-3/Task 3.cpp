#include <iostream>
using namespace std;

int main() {
    float u, a, t, v;

    cout << "Enter Initial Velocity (u): ";
    cin >> u;

    cout << "Enter Acceleration (a): ";
    cin >> a;

    cout << "Enter Time (t): ";
    cin >> t;

    v = u + (a * t);

    cout << "Final Velocity = " << v << endl;

    return 0;
}
