/*
Function with One Argument
Let's consider the case where we want to print five stars consecutively, repeated n times. If n is 4, the output should look like this:


*****
*****
*****
*****
Wouldn't it be convenient to have a tool that prints stars in a rectangular shape over n lines, depending on the value of n? By using a function, we can handle such variable values appropriately. The structure is as follows:


void PrintNLines(int n) {
    // Code implementation
}
You simply need to specify the desired variable name along with its type within the parentheses next to the function name. In this case, since the problem involves printing over n lines, we used the name n for convenience. The value specified when defining a function is called the function's argument.

A function that takes n and prints five stars over n lines can be written as follows:


void PrintNLines(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++)
            cout << "*";
        cout << endl;
    }
}
With a function like this, you can fill as many lines as you want with five stars. To execute such a function, you need to write it in the form of function name(argument value). An example is as follows:


void PrintNLines(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int row_num;
    cin >> row_num;

    PrintNLines(row_num);

    return 0;
}

>> 3

*****
*****
*****
*/
my code:
#include <iostream>

using namespace std;
void printprn(int N)
{
    for(int i=0;i<N;i++)
    {
        {
            cout<<"12345^&*()_";
        }
        cout<<endl;
    }
}
int N;

int main() {
    cin >> N;

    // Please write your code here.
    printprn(N);
    return 0;
}