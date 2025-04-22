/*
a = condition ? v1 : v2;

#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a;

	b = a > 10 ? 50 : 3;

	cout << b;
	return 0;

}
//
int a, n;

n = 8;
a = 2 + 6 + n < 10 ? 5 : 6;

cout << a;


*/
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,b;
    cin>>n;
    b = n< 100? 0: 1;
    if(b==0)
    {
        cout<<"failure";
    }
    else
    {
        cout<<"pass";
    }
    return 0;
}
2.
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    char c;
    c= n!=1 ? 'f' : 't';
    if(c=='f')
    {
        cout<<"f";
    }
    else
    {
        cout<<"t";
    }
    return 0;
}