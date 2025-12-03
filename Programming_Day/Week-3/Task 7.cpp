#include <iostream>
using namespace std;

int main() {
    string movieName;
    float adultPrice, childPrice, donationPercent;
    int adultTickets, childTickets;

    cout << "Enter movie name: ";
    cin >> movieName;
    cout << "Enter adult ticket price: ";
    cin >> adultPrice;
    cout << "Enter child ticket price: ";
    cin >> childPrice;
    cout << "Enter number of adult tickets sold: ";
    cin >> adultTickets;
    cout << "Enter number of child tickets sold: ";
    cin >> childTickets;
    cout << "Enter percentage to donate to charity: ";
    cin >> donationPercent;
 float totalAmount = (adultPrice * adultTickets) + (childPrice * childTickets);
    float donation = (donationPercent / 100) * totalAmount;
    float remaining = totalAmount - donation;

    cout << "Total amount: " << totalAmount << endl;
    cout << "Amount donated: " << donation << endl;
    cout << "Remaining amount: " << remaining << endl;

}
