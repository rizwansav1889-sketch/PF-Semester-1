#include <iostream>
using namespace std;

int main() {
    double t1, t2;
    cout<< "Enter Temperature of City 1: ";
    cin>> t1;
    cout<< "Enter Temperature of City 2: ";
    cin>> t2;

    double diff = t1 - t2;
    if (diff < 0) diff = -diff;

    if (diff > 10) {
        cout<< "Difference is too Big" << endl;
    } else {
        coutnn<< "Program Ends" << endl;
    }

    return 0;
}
