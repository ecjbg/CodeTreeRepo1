/*
Infinite Loop
How can we write a program that continuously receives input and sums the numbers until 
a number greater than 10 is given, at which point it stops adding and outputs the value?

In such cases, since we do not know how many times we need to receive input, we can solve
 this by creating an infinite loop using a while statement. An infinite loop is a loop that 
 cannot be exited until a specific condition is met. This is achieved by using the condition

 while(true), which repeats indefinitely, and a break statement to exit when a specific condition 
 is satisfied.

The format of an infinite loop is as follows:

while (true) {
    code 1
    if (condition){
        code 2
        break;
    }
    code 3
}
code 4
In the following code, if n is less than 10, code 2 is executed repeatedly, receiving new input.
 When a value of 10 or greater is first entered, code 1 is executed, the loop is exited, and code
 3 is performed.

int n;
while (true) {
    cin >> n;
    if (n >= 10) {
        code 1
        break;
    }
    code 2
}
code 3
C++ Code
#include <iostream>
using namespace std;

int main() {

	int n;
	int sum_val = 0;

	while (true) {
		cin >> n;
		cout << "current val is " << n << endl;
		if (n >= 10) {
			cout << "val is greater than or equal to 10" << endl;
			break;
		}
		cout << "val is smaller than 10" << endl;
		sum_val += n;
	}
	cout << sum_val;

	return 0;

}
Output
>> 5

current val is 5
val is smaller than 10

>> 8

current val is 8
val is smaller than 10

>> 15

current val is 15
val is greater than or equal to 10
13
Side Note 1
You can also use while(1) as shown below.

The reason while(1) becomes an infinite loop: The condition inside the parentheses is the value 1, 
which is a non-zero (false) value, thus it is true. Therefore, since the condition is true, the while
 loop repeats indefinitely.

C++ Code
#include <iostream>
using namespace std;

int main() {

	while (1) {
		cout << "a" << endl;
	}

	return 0;

}
Output
a
a
a
a
...
infinite repetition
Side Note 2
You can also use a for loop to create an infinite loop. By omitting the initialization, condition,
 and increment expressions in the for loop, the code inside the for loop repeats indefinitely.

C++ Code
#include <iostream>
using namespace std;

int main() {

	for (;;) {
		cout << "b" << endl;
	}

	return 0;

}
Output
b
b
b
b
...
infinite repetition
*/