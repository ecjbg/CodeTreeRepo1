#include<iostream>
using namespace std;

int f(int n){
    int a[15] = {1, 1, 2, 3, 2, 1, 4, 1, 1, 1, 2, 4, 2, 3, 4};
    int idx = 0;
    while(n < 15){ 
        n += a[n];
        idx++; 
    }
    return idx;
}
int main()
{
	int n;
	cin>>n;
	int k=f(n);
	cout<<k;
}