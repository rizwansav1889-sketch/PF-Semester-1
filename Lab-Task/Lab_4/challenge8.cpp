#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;


    if (ch >= '0' && ch <= '9') {
        cout << "It is a Number" << endl;
    }

    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "It is a Vowel" << endl;
    }

    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "It is a Consonant" << endl;
    }
    else {
        cout << "Neither vowel, consonant, nor number" << endl;
    }

    return 0;
}
