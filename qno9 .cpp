
#include <iostream>
using namespace std;

// Function to check if a number is prime using loops only
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    int count = 0;    
    int num = 3;     
    cout << "First " << N << " twin prime pairs:\n";

    while (count < N) {
        if (isPrime(num) && isPrime(num + 2)) {
            cout << "(" << num << ", " << num + 2 << ")\n";
            count++;
        }
        num++;
    }

    return 0;
}
