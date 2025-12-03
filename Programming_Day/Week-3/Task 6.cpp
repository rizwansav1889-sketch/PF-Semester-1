#include <iostream>
using namespace std;

int main() {
    float bagSize, bagCost, area;
    float costPerPound, costPerSqFt;

    cout << "Enter fertilizer bag size (in pounds): ";
    cin >> bagSize;
    cout << "Enter cost of the bag: ";
    cin >> bagCost;
    cout << "Enter area covered (in square feet): ";
    cin >> area;

    costPerPound = bagCost / bagSize;
    costPerSqFt = bagCost / area;

    cout << "Cost per pound: " << costPerPound << endl;
    cout << "Cost per square foot: " << costPerSqFt << endl;

}
