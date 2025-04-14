When At Least One Condition is Satisfied/Not Satisfied
To determine if a number n is a prime number,
 you need to check if n is divisible by any number from 2 to n−1. 
 In cases where the condition involves "at least one", 
 you can solve this by declaring a bool type variable that 
 holds True or False values, as shown below.


int main() {
    int n = 17;

    bool is_prime = true;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            is_prime = false;

    if(is_prime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
However, you can write this process more neatly 
by using a function to determine if a number is prime.

Since a function terminates immediately upon encountering 
a return statement, even if it hasn't executed all the code within it, 
you can leverage this characteristic to easily determine if a number n is prime, as shown below.


bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;

    return true;
}
As the for loop iterates, if the number n is divisible by any number
 between 2 and n−1, the return statement will be triggered, returning false, 
 indicating that it is not a prime number. If none of the numbers divide n, 
 the loop will complete, and the function will return true. By using this function, 
 you can determine if a number n is prime without needing a bool variable, as shown below.


bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;

    return true;
}

int main() {
    int n = 17;

    if(IsPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

>> Prime
//my code for Prime Number Determination Using Functions:
#include <bits/stdc++.h>

using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int sumPrimesInRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
   int u = sumPrimesInRange(a, b);
    cout << u << endl;
    return 0;
}