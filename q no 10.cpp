
#include <iostream>
using namespace std;
string decimalToBinary(int num) {
    if (num == 0) return "0";

    string binary = "";

    while (num > 0) {
        int bit = num % 2;
        binary = char(bit + '0') + binary;
        num /= 2;
    }

    return binary;
}

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Binary = " << decimalToBinary(n);
}
