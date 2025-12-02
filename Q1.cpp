#include <iostream>
using namespace std;

int main() {
    int totalInches, feet, inches;

    // Input
    cout << "Enter height in inches: ";
    cin >> totalInches;

    // Convert
    feet = totalInches / 12;      // 1 foot = 12 inches
    inches = totalInches % 12;    // Remaining inches

    // Output
    cout << "Height is: " << feet << " feet and " << inches << " inches." << endl;

    return 0;
}
