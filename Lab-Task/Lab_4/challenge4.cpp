#include <iostream>
using namespace std;

int main() {
    string password = "roomate987";
    string n;
    cout << "Enter the password: ";
    cin >>n;

    if (n ==password)
        cout << "Wow! You have cracked the code!";
    else
        cout << "It is not that simple, Try again";

}
