/*1.
if else / if else
When using if else / if else conditional statements more than once, as shown below, 
the initially defined if-else statement and the subsequently defined if-else statement are 
unrelated to each other.

if (condition1) {
    code1-1
}
else {
    code1-2
}

if (condition2) {
    code2-1
}
else {
    code2-2
}
code3
In a situation where the code is written as above, if both condition1 and condition2 
are true, the code will execute in the order of code1-1, code2-1, code3. However, if condition1 
is true and condition2 is false, the code will execute in the order of code1-1, code2-2, code3.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a % 2 == 0) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}

	if (a >= 5) {
		cout << "normal" << endl;
	}
	else {
		cout << "small" << endl;
	}

	cout << "done";

	return 0;

}
Output Example 1
>> 10

even
normal
done
Output Example 2
>> 4

even
small
done
*/
/*2.
Comparison Operators and Conditional Statements
What will be the result of the following code?

cout << (1 > 2) << endl;
cout << (1 < 2) << endl;
The output will be 0 / 1 as follows:

0
1
In other words, comparison operators return a value of 1 (true) or 0 (false) depending 
on whether the expression is correct or incorrect.
*/
/*
if ( a % 2 == 0 || (a % 2 == 1 && a >= 10) ) {
    // Code block 1
}

*/
/*3.
Precedence of and, or Operators
What happens if we don't use parentheses? Let's look at the following code.

if (a % 2 == 0 || a % 5 == 0 && a % 7 == 0) {
    // Code block 1
}
Since and has a higher precedence than or, it will be evaluated first, making the code 
function exactly the same as the following:

if ( a % 2 == 0 || (a % 5 == 0 && a % 7 == 0) ) {
    // Code block 1
}
*/
