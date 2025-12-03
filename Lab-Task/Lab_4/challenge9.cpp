#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;
    int age1, age2, age3;

    cout << "Enter first brother's name: ";
    cin >> name1;
    cout << "Enter age of " << name1 << ": ";
    cin >> age1;

    cout << "Enter second brother's name: ";
    cin >> name2;
    cout << "Enter age of " << name2 << ": ";
    cin >> age2;

    cout << "Enter third brother's name: ";
    cin >> name3;
    cout << "Enter age of " << name3 << ": ";
    cin >> age3;


    if (age1 < age2 && age1 < age3) {
        cout << "The youngest brother is: " << name1
             << " with age " << age1 << endl;
    }
    else if (age2 < age1 && age2 < age3) {
        cout << "The youngest brother is: " << name2
             << " with age " << age2 << endl;
    }
    else {
        cout << "The youngest brother is: " << name3
             <<" and his age is " << age3 << endl;
    }

    return 0;
}
