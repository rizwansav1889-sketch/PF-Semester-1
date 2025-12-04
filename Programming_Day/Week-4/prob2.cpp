#include <iostream>
using namespace std;

int main() {
    int speed;
    cout<< "Enter Speed: ";
    cin>> speed;

    if (speed > 100) {
        cout<< " YOU WILL BE CHALLANED!!!" << endl;
    } else {
        cout<< "Perfect! You're going good." << endl;
    }

    return 0;
}
