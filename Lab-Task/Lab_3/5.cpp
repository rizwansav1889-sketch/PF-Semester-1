#include <iostream>
using namespace std;
int main(){
float matricMarks, fscMarks, ecatMarks;
    float aggregate;
    string name;
    cout<<"Enter your name = ";
    cin>>name;

    cout << "Enter Matric marks out of 1100: ";
    cin >> matricMarks;

    cout << "Enter intermediate marks out of 550: ";
    cin >> fscMarks;

    cout << "Enter ECAT marks out of 400: ";
    cin >> ecatMarks;

    aggregate = (matricMarks / 1100 * 10) +
                (fscMarks / 550 * 40) +
                (ecatMarks / 400 * 50);

    cout << "Your aggregate is: " << aggregate << "%" << endl;


}
