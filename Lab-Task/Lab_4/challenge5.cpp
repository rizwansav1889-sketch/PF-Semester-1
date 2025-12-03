#include <iostream>
using namespace std;

int main() {
    float amount, discount = 0,total;

    cout << "Enter total shopping amount: ";
    cin >> amount;

    if (amount <= 5000){
    discount = (5.0 / 100) * amount;

    }

    else{
    discount = (10.0 / 100) * amount;

    }

    cout << "Discount: Rs. " << discount << endl;
    cout << "Final Price after discount: Rs. " << (amount - discount) << endl;
}
