/*
1.
cout << (int)strlen("LEEBROS\0") << " " << (int)strlen("LEEBROS\n");
its ans is: 7 8
2.
string str1 = "abcde"; 
char str2[] = {'a','b','c','d','e','f','g'};
int len1 = str1.length()-2;
int len2 = strlen(str2)-3;

cout << str1[len2] << " " << str2[len1] << endl;

ans:e d

3.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int len1 = a.length();
    int len2 = b.length();
    int len3 = c.length();

    int maxLen = max(len1, max(len2, len3));
    int minLen = min(len1, min(len2, len3));

    cout << maxLen - minLen << endl;

    return 0;
}

4.
Reading and Printing Strings with Spaces
In C++, strings are separated by spaces. Here, spaces include both spaces 
and newlines. Therefore, if strings are input with a space between them, 
using cin to input a single string will result in only the first string being captured, 
as shown below.

C++ Code
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	cin >> str;
	cout << str;

	return 0;

}

// Input
>> hello world

// Output
hello

If you want to capture a string that includes spaces into a single string, 
you need to change the delimiter from spaces and newlines to only newlines.

You can conveniently achieve this using the getline() function from the 
string header. The getline function reads input using only newlines as delimiters, 
allowing you to input strings that include spaces.

The getline function used with standard input can be utilized as follows:

getline(cin, string_to_receive)

#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	getline(cin, str);
	cout << str;

	return 0;

}

// Input
>> hello world

// Output
hello world

In this case, if hello world is input as shown above,
 when you print the 6th character str[5], a space will be displayed. 
 Additionally, if you use the length() function to find the length of the str string,
 the total length including spaces will be output.


#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	
	getline(cin, str);

	cout << str[5] << endl;
	cout << str.length() << endl;

	return 0;

}


// Input
>> hello world

// Output
    (space)
 11 
 
 5.//printing substring of a string.
 #include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // use getline since the string may contain spaces

    for (int i = 2; i <= 9; i++) {
        cout << s[i];
    }

    cout << endl;
    return 0;
}
6.
#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int cnt=0;
    getline(cin,s);
    int k=s.length();
    char c;
    cin>>c;
    for(int i=0;i<k;i++)
    {
        if(s[i]==c)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
//If you're using getline(cin, s) and then cin >> c,
 make sure there’s no leftover newline messing up the second input.
 Sometimes, getline reads a line including the newline char, and then cin >> c 
 could act weird. You can add this line before cin >> c:

cpp
Copy
Edit
cin >> ws; // clears any whitespace/newline
cin >> c;

Are whitespaces counted as characters?
Yes, whitespace characters are counted in a string.

That includes:

' ' (space)

'\t' (tab)

'\n' (newline, if you're reading from a file or multi-line input)
//
You CANNOT write:
getline(cin, s1, s2);
That’ll give you an error because getline() 
takes only two or three arguments max, and the third one is not a string 
— it's actually a delimiter character, like this:
1. Reading two full lines:
string s1, s2;
getline(cin, s1);  // Reads first line
getline(cin, s2);  // Reads second line
2. Reading until a specific character (custom delimiter):
string s;
getline(cin, s, ',');  // Reads until it finds a comma


*/
#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    int k=s1.length();
    int h=s2.length();
    for(int i=0;i<k;i++)
    {
        if(s1[i]!=' ')
        {
            cout<<s1[i];
        }
    }
    for(int i=0;i<h;i++)
    {
        if(s2[i]!=' ')
        {
            cout<<s2[i];
        }
    }
    return 0;
}