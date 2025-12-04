#include <iostream>
#include <string>
using namespace std;

int main() {
    string country;
    double price, discount = 0;

    cout << "Enter Country: ";
    cin >> country;
    cout << "Enter Ticket Price: ";
    cin >> price;

    if (country == "Ireland") {
        discount = 0.10;
    } else {
        discount = 0.05;
    }

    double finalPrice = price - (price * discount);
    cout << "Discounted Price: " << finalPrice << endl;

    return 0;
}
