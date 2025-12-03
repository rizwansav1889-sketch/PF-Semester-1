#include <iostream>
using namespace std;

int main() {
    int paintArea, wallWidth, wallHeight, wallArea, wallsPainted;

    cout << "Enter total area you can paint (in sq meters): ";
    cin >> paintArea;
    cout << "Enter wall width: ";
    cin >> wallWidth;
    cout << "Enter wall height: ";
    cin >> wallHeight;

    wallArea = wallWidth * wallHeight;
    wallsPainted = paintArea / wallArea;

    cout << "You can completely paint " << wallsPainted << " walls.\n";
}
