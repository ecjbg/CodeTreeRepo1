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