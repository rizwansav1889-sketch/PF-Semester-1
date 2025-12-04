#include <iostream>
using namespace std;

int main() {
    int holidays;
    cout << "Enter number of Holidays: ";
    cin >> holidays;

    int workingDays = 365 - holidays;

    // Time for games in minutes
    int timeForGames = (workingDays * 63) + (holidays * 127);

    int difference = 30000 - timeForGames;

    if (difference > 0) {
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    } else {
        difference = -difference;  // convert to positive
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }

    return 0;
}
