#include <iostream>
using namespace std;

int main() {
    float vegPrice, fruitPrice;
    int vegKg, fruitKg;

    cout << "Enter vegetable price per kg: ";
    cin >> vegPrice;
    cout << "Enter fruit price per kg: ";
    cin >> fruitPrice;
    cout << "Enter total kg of vegetables: ";
    cin >> vegKg;
    cout << "Enter total kg of fruits: ";
    cin >> fruitKg;

    float totalCoins = (vegPrice * vegKg) + (fruitPrice * fruitKg);
    float totalRps = totalCoins / 1.94;

    cout << "Total earnings in Rps: " << totalRps << endl;

}
