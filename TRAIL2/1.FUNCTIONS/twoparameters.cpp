/*
Function with Two Parameters
Let's consider the case where you need to print m stars consecutively, repeated n times. If n is 4 and m is 5, the output should look like this:


*****
*****
*****
*****
Wouldn't it be convenient to have a tool that prints stars in a rectangular shape, with m stars per line, repeated for n lines, based on the values of n and m? Using functions allows us to handle multiple variable values appropriately. The structure is as follows:


void PrintRect(int n, int m) {
    // Write code here
}
When there are two or more parameters, you can separate each parameter with a comma ,. To execute the above function with n=3 and m=5, you would call it as PrintRect(3, 5). Functions with three or more parameters can be defined in the same way.

A function that takes n and m as inputs and prints m stars per line for n lines can be written as follows:


void PrintRect(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << "*";

        cout << endl;
    }
}
Here is the code to print stars in a rectangular shape using the above function:


void PrintRect(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << "*";

        cout << endl;
    }
}

int main() {
    int row_num, col_num;
    cin >> row_num >> col_num;

    PrintRect(row_num, col_num);
    return 0;
}

>> 3 5

*****
*****
*****
*/
my code:

#include <iostream>

using namespace std;
void printprn(int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<1;
        }
        cout<<endl;
    }
}
int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    printprn(n,m);
    return 0;
}