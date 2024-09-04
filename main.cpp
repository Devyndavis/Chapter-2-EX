// This program calculates and displays several values
// and various percentages for those values.

#include <iostream>
using namespace std;

int main() {
    int total = 100;
    int part = 20;
    double percentage = (static_cast<double>(part) / total) * 100;

    cout << "The percentage is: " << percentage << "%" << endl;

    return 0;
}
