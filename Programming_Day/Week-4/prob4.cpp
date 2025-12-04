#include <iostream>
using namespace std;

int main() {
    int red, white, tulip;
    double total;

    cout<< "Enter number of Red Roses: ";
    cin>> red;
    cout<< "Enter number of White Roses: ";
    cin>> white;
    cout<< "Enter number of Tulips: ";
    cin>> tulip;

    total = red * 2.00 + white * 4.10 + tulip * 2.50;

    cout<< "Original Price: " << total << endl;

    if (total > 200) {
        double discounted = total - (total * 0.20);
        cout << "Price after Discount: " << discounted << endl;
    }

    return 0;
}
