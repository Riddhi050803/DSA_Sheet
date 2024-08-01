#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; // 2^0

    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2; // Increment the base (2^i)
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binaryNumber = 1011;
    cout << "Decimal of " << binaryNumber << " is " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}

