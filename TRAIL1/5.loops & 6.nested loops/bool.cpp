/*
At Least One Satisfying Case
How can we determine if there is at least one even number among a, b, and c?
When the number of elements is fixed, you can easily determine this using an if statement 
and the or operator.

if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
    cout << "even";
}
But how can we know if there is at least one even number among the numbers from a to b?

Since you need to check each number from a to b, a for loop is necessary. To determine if 
at least one of several options satisfies a condition, you can use a bool type variable that 
holds either true or false. Set the initial value of the bool variable to false, and if the 
condition is satisfied, change the variable's value to true. This way, you can determine if 
there was at least one case that satisfied the condition.

int a, b;
bool satisfied = false;
for (int i = a; i <= b; i++) {
    if (condition satisfied) {
        satisfied = true;
    }
}
if (satisfied == true) {
    cout << "Exists";
}
else {
    cout << "Not exists";
}
C++ Code
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool satisfied = false;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            satisfied = true;
        }
    }
    if (satisfied == true) {
        cout << "Exists";
    }
    else {
        cout << "Not exists";
    }

    return 0;
}
Output Example 1
>>  3 3

Not exists
Output Example 2
>>  3 5

Exists
*/