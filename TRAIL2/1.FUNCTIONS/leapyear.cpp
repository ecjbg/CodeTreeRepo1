//leap year sht
//i tried printing "true" when the return type was bool so it gave me runtime error
//my code:
#include <iostream>

using namespace std;
bool leapyear(int y)
{
    if(y%4==0 && y%100!=0||y%400==0)
    {
        return true;
    }
    else{
    return false;}
}
int y;

int main() {
    cin >> y;

    // Please write your code here.
    if(leapyear(y))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
/*
#include<iostream>
using namespace std;

int Lee(int x) 
{
    int last = 10; 
    while (x){
        if (x % 10 > last) return 0; 
        last = x % 10;
        x /= 10;
    }
    return 1; 
}
int main()
{
	cout<<Lee(654321)+Lee(123345)+Lee(442211)+Lee(202104)<<endl;
}
*/