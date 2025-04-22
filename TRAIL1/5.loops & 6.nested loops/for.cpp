/*
Side Note 3
In addition to i++, there is also ++i for incrementing the variable i by 1. 
Since ++ is after i in i++, it is called the postfix increment operator, whereas ++i 
is called the prefix increment operator.

The difference between the two lies in the order of execution between the code on the
 line and the increment operation. With the prefix operator ++i, the increment occurs 
 before executing the line of code. With the postfix operator, the code execution occurs first,
 followed by the increment.

int a = 3, b = 5;
cout << a++ << endl;
cout << ++b << endl;
cout << a << endl;

// Output
3
6
4
The value of a increases to 4 after the first cout line is executed, so the initial output is 3.
 The value of b increases before the second cout line is executed, so 6 is printed.
*/
int q = 0, s = 1, t = 1;
for (int i = 0; i < 4; i++) {
    q = s + t;
    t = s;
    s = q;
}
cout << q;
//ans : 8