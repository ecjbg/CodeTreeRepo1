#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    double a,b;
    cin>>c;
    cin>>a>>b;
    cout<<c<<"\n";
    cout<<fixed<<setprecision(2)<<a<<"\n"<<b;
    return 0;
}
//it gave wrong ans bec i used int instead of double.
/*
Input Two Values Separated by a Specific Character
When two numbers are input with a specific non-space character in between, 
you can use cin to read that character into a character-type variable and ignore it, 
allowing you to receive the two numbers.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int a, b;
	char c;

	cin >> a >> c >> b;
	cout << a << endl << b;

	return 0;

}
Output
>> 50:60

50
60
In this case, you can ignore the intermediate character without declaring a new variable
 by using cin.get().

C++ Code
#include <iostream>
using namespace std;

int main() {

	int a, b;

	cin >> a;
	cin.get();
	cin >> b;
	cout << a << endl << b;

	return 0;

}
Output
>> 50:60

50
60

*/
/*
Inputting Three or More Values Separated by a Specific Character
The following code demonstrates how to input three numbers separated by the - character 
and then output them. Since the - character does not need to be stored for use, it can be 
stored in a single character variable.

C++ Code
#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    char d;

    cin >> a >> d >> b >> d >> c;
    cout << a << endl << b << endl << c;

    return 0;

}
Output
>> 50-60-70

50
60
70
Similarly, you can use cin.get() to achieve the same result.

#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    char d;

    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cout << a << endl << b << endl << c;

    return 0;

}

*/
//mm-dd-yyyy to yyyy.mm.dd
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    char d,j;
    cin>>a>>d>>b>>j>>c;
    cout<<c<<"."<<a<<"."<<b;
    return 0;
}
//9-889 to 9899
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    char d;
    cin>>a>>d>>b;
    cout<<a<<b;
    return 0;
}
//010-4773-3799 to 010-3799-4773
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    getline(cin, a, '-');
    getline(cin, b, '-');
    getline(cin, c);

    cout << a << "-" << b << "-" << c;
    return 0;
}
