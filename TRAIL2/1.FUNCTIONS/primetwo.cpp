#include <iostream>
using namespace std;

// Check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Calculate sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Check if a number is even
bool isEven(int n) {
    return n % 2 == 0;
}

// Count special primes
int countSpecialPrimes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isEven(digitSum(i))) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << countSpecialPrimes(A, B) << endl;
    return 0;
}
