/*
  1. Global Variables
When writing a function to sum all the elements in a list, is it always necessary to pass the list to the function like this?

int SumAll(int *list) {
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum += list[i];

    return sum;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    int total_sum = SumAll(arr);
    cout << total_sum << endl;
}

>> 10
Not necessarily. While it is certainly good practice to pass all necessary components to a function as arguments, it is not always required. By defining values above the function, they become global variables that can be accessed anywhere, allowing the SumAll function to directly reference the arr values.

int arr[4] = {1, 2, 3, 4};

int SumAll() {
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int total_sum = SumAll();
    cout << total_sum << endl;
}

>> 10
One important characteristic of global variables is 
that they are automatically initialized to 0. When an array is declared,
 all its elements are filled with 0, and in the case of a variable, it is set to 0.

int arr[10];
int sum;

int main() {
    sum = arr[0];
    for(int i = 1; i <= 5; i++)
        sum += arr[i];

    cout << sum << endl;
}

>> 0
When solving simple problems, it is important to effectively 
utilize global variables to solve the problem cleanly.

////
2.
Scope
Variables defined inside a function cannot be used once the function is exited. These variables are called local variables, and in the code below, sum is a local variable of the SumAll function. Therefore, attempting to reference this variable outside the function will result in the following error:

#include <iostream>

using namespace std;

int arr[4] = {1, 2, 3, 4};

int SumAll() {
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int total_sum = SumAll();
    cout << sum << endl;
}

>> error: ‘sum’ was not declared in this scope
Global variables, which are not confined to a function, can 
be used anywhere. However, variables defined inside a function disappear
 once the function terminates, making them unavailable for use elsewhere.

This behavior is not limited to functions but also applies to for loops. 
In the following code, the variable x is defined inside the for loop j, 
and it disappears once the loop is exited. Therefore, the variable x cannot 
be used outside the loop.

#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 4; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            int x = j;
            sum += x;
        }
        cout << x << endl;
    }
}

>> error: ‘x’ was not declared in this scope
////
3.
Using the Same Variable Names
What will be the result of the following code?

#include <iostream>

using namespace std;

int a = 10, b = 20;

void PrintAandB() {
    cout << a << " " << b << endl;
}

void Modify(int a, int b) {
    cout << a << " " << b << endl;
    PrintAandB();
    int temp = a;
    a = b; 
    b = temp;
}

int main() {
    Modify(50, 60);
    PrintAandB();
    return 0;
}
The output will be as follows:

50 60
10 20
10 20
As shown in the code above, when variables have the same name, the closest variable is used.
Since the variables a and b are defined as parameters within the Modify function, they 
are local variables. Therefore, when outputting within the function, the closest a and 
b are used, which are the local variables, not the global ones. However, in the PrintAandB 
function, the parameters a and b of the Modify function cannot be referenced. Thus, it 
references the closest available global variables a and b, resulting in the output 10 20.
*/
1. 
#include <iostream>
#include <string>
using namespace std;


int findSubstring(const string& text, const string& pattern) {
    size_t pos = text.find(pattern);
    if (pos != string::npos)
        return pos;
    else
        return -1;  
}

int main() {
    string text, pattern;
    cin >> text;
    cin >> pattern;

    cout << findSubstring(text, pattern) << endl;

    return 0;
}
