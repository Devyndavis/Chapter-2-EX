// This program calculates and displays the discounted value of an item.

#include <iostream>
using namespace std;

int main() {
    double originalPrice = 50.0;
    double discountRate = 0.2; // 20% discount
    double discountAmount = originalPrice * discountRate;
    double finalPrice = originalPrice - discountAmount;

    cout << "The final price after discount is: $" << finalPrice << endl;

    return 0;
}
