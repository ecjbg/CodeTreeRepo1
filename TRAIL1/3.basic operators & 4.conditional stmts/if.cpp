/*
if / if
When using the if statement more than once as shown below, the initially defined if 
statement and the subsequently defined if statement are not related to each other.

if (condition1) {
    code1
}

if (condition2) {
    code2
}

code3
In the situation where the code is written as above, if both condition1 and condition2 
are true, the code will execute in the order of code1, code2, code3. However, if condition1
 is true and condition2 is false, the code will execute in the order of code1, code3.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a % 2 == 0) {
		cout << "even" << endl;
	}

	if (a >= 5) {
		cout << "normal" << endl;
	}

	cout << "done";

	return 0;

}

Output Example 1
>> 10

even
normal
done
Output Example 2
>> 4

even
done
*/
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    if(a%2!=0)
    {
        a+=3;
    }
    if(a%3==0)
    {
        a/=3;
    }
    cout<<a;
    return 0;
}