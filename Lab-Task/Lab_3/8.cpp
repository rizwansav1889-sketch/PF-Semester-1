#include <iostream>
using namespace std;
int main(){
float voltage, current, power;

    cout << "Enter Voltage (V): ";
    cin >> voltage;

    cout << "Enter Current (I): ";
    cin >> current;

    power = voltage * current;

    cout << "Power = " << power << " Watts" << endl;

}
