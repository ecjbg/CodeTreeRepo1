/*scientific notation example
double e = 1.5e2;
double f = 2.5e-3;

cout << e;
cout << "\n";
cout << f;

 double a = 1.2345;
 int b = 10;

 // Convert floating-point to integer
 cout << (int)a;     // Output: 1
 cout << "\n";
 cout << (int)3.14;  // Output: 3
 cout << "\n";
 cout << (int)-2.99; // Output: -2
 cout << "\n";
 cout << (int)0.0;   // Output: 0
 cout << "\n";
 cout << (int)7.999; // Output: 7
 cout << "\n";

 // Convert integer to floating-point.
 cout << (double)b;  // Output: 10
 cout << "\n";
 cout << (double)5;  // Output: 5
 cout << "\n";
 cout << (double)-1; // Output: -1
 cout << "\n";
 cout << (double)0;  // Output: 0
 cout << "\n";
 cout << (double)42; // Output: 42
 cout << "\n";

//
Note:
(int) simply discards the decimal part without rounding the value of the floating-point number.

cout << (int)4.99;    // Output: 4
cout << "\n";
cout << (int)-4.99;   // Output: -4

//
Boolean Type (bool)
Definition and Features of bool
Only two values, true and false.
Often used in logical operations, playing a crucial role in conditional and loop statements.
In C++, true is represented as 1 and false is represented as 0.
bool Type Conversion
Integer ↔ bool Conversion
Integer → bool Conversion

An integer is converted to false only when its value is 0; otherwise, it's converted to true.


cout << (bool)1;    // Output: 1
cout << "\n";
cout << (bool)0;    // Output: 0
cout << "\n";
cout << (bool)(-5); // Output: 1
bool → Integer Conversion

In logical types, true converts to 1 and false converts to 0.


cout << (int)true;  // Output: 1
cout << "\n";
cout << (int)false; // Output: 0
*/
#include <iostream>

using namespace std;

int main() {
    // Variable declaration
    int a = 1;
    int b = 5;
    int c = 3;
    
	// Value change
    a = c;
    a = a + c;
    b = b - c;
	
    // Output
    cout << a;
    cout << "\n";
    cout << b;
    cout << "\n";
    cout << c;
    return 0;
}
