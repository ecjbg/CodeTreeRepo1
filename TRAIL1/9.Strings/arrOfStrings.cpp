/*

1.
Managing a List of Strings
To manage a list of strings, you can define a list with
 each string as an element. The use of a single string is similar
 to a one-dimensional array, and a list of strings operates like a 
 two-dimensional array, so understanding this principle is important.

A list of strings can be created by declaring an array of string.
 Below is a list of strings with three string elements.

string arr[3] = { "banana", "apple", "pizza" };

cout << arr[0] << endl;           // banana <- first string
cout << arr[0].length() << endl;  // 6 <- length of the first string

cout << arr[0][0] << endl;        // b <- first character of the first string
cout << arr[0][1] << endl;        // a <- second character of the first string
cout << arr[1][2] << endl;        // p <- third character


2.
problem:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if ((arr[i].length() >= 3 && arr[i][2] == c) || 
            (arr[i].length() >= 4 && arr[i][3] == c)) {
            cout << arr[i] << endl; // print the matching string
            count++;
        }
    }

    cout << count << endl; // print the count at the end
    return 0;
}
//
3.

*/