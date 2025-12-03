#include <iostream>
using namespace std;

int main() {
    string name;
    int weightToLose, totalDays;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter how many kilograms you want to lose: ";
    cin >> weightToLose;

    totalDays = weightToLose * 15;

    cout << name << ", it will take you " << totalDays << " days to lose " << weightToLose << " kg.\n"; 
}
