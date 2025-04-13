/*
Definition of a Function
Let's consider the case where we need to print 5 stars consecutively over 4 lines. This can be solved using a nested loop, as we learned earlier.


*****
*****
*****
*****
However, if there were a tool that could print ***** for us, wouldn't it make the problem easier to solve? Let's name this tool Print5Stars for convenience. Then, the problem could be solved by repeating Print5Stars four times.

A function is exactly what allows us to achieve a desired goal and use it as if it were a tool. In C/C++, a function can be defined as follows:


void Print5Stars() {
    // Write code here
}
To define a function, you must specify the return type, followed by the function name. If there is no return value, you use void as shown above. In C/C++, function names follow PascalCase, where the first letter is capitalized and each new word starts with a capital letter.

In this case, since the function's role is to print 5 stars, we named it Print5Stars. The function's task is to print 5 stars, so the completed function looks like this. Note that to achieve the desired format, a newline is added after printing the stars.


void Print5Stars() {
    for(int i = 0; i < 5; i++)
        cout << "*";
    cout << endl;
}
To execute such a function, you write it in the form functionName();.
Assuming the above function is complete, the problem of printing 5 stars over 4 lines can be solved as follows. Note that it is customary to leave a blank line between functions or between functions and other code.


void Print5Stars() {
    for(int i = 0; i < 5; i++)
        cout << "*";
    cout << endl;
}

int main() {
    for(int i = 0; i < 4; i++)
        Print5Stars(); 
    return 0;
}

>> *****
   *****
   *****
   *****
*/

my code:
#include <iostream>
using namespace std;
void printpattern()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    
}

int main() {
    // Please write your code here.
    printpattern();
    return 0;
}