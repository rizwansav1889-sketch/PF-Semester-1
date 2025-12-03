#include <iostream>
using namespace std;

int main() {
    int salary = 10000;
    int laptop_price = 50000;
    int months = 6;

    int advance = (salary * 0.5) * months;

    cout << "Total advance Ali will get in 6 months = Rs. " << advance << endl;

    if (advance >= laptop_price) {
        cout << "Yes, Ali can buy the laptop with this advance salary." << endl;
    } else {
        int remaining = laptop_price - advance;
        int more_months = (remaining * 2) / salary;
        cout << "No, Ali needs approx " << more_months << " more months of 50% advance salary." << endl;
    }

    return 0;
}
