/*
Function Receiving a String as an Argument
How can we pass a string as an argument to a function?

Let's examine the following code.

#include <iostream>
#include <string>

using namespace std;

void Modify(string s) {
     s += "apple";
}

int main() {
    string str = "banana";
    Modify(str);
    cout << str << endl;
    return 0;
}
You will observe that the result of the above code is banana. 
This is because, by default, when a string is passed as an argument to a function,
 it is passed by value (call by value).

If you want to achieve the result bananaapple,
 wouldn't it be better to pass the string by reference (call by reference)?

The first method is to use pointers. You can create a string pointer and write the code as follows.

#include <iostream>
#include <string>

using namespace std;

void Modify(string *s) {
     *s += "apple";
}

int main() {
    string str = "banana";
    Modify(&str);
    cout << str << endl;
    return 0;
}
The second method is to implement call by reference using the & operator.
 This method is more commonly used.

#include <iostream>
#include <string>

using namespace std;

void Modify(string &s) {
     s += "apple";
}

int main() {
    string str = "banana";
    Modify(str);
    cout << str << endl;
    return 0;
}
*/
//my code:
#include <iostream>
using namespace std;

void palin(string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main()
{
    string s;
    cin >> s;
    palin(s);
    return 0;
}
/*
void swap(int a, int b) {    
    int temp = a;    
    a = b; b = temp;    
    cout << a << ", " << b << ", ";
}
int main() {    
    int a = 2; int b = 3;    
    swap(a, b);    
    cout << a << ", " << b;
}
//so here since it is compiled line by line
the swap(a,b) func is executed first then as usual a and b are printed.

*/
