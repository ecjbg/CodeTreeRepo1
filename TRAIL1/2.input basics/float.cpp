/*
double n = 3.14159;
cout << setprecision(2) << n;  // might print 3.1 or 3.14 or even scientific form

cout << fixed << setprecision(2) << n; // prints 3.14 always 


*/
1.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    double a;
    cin>>a;
    double k=a+1.5;
    cout<<fixed<<setprecision(2)<<k;
    return 0;
}
