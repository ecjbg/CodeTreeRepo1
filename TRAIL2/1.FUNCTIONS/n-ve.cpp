/*
#include <iostream>

using namespace std;

int n;
int arr[50];

void fn1(int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=-arr[i];
        }
        cout<<arr[i]<<" ";
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
fn1(arr);
    return 0;
}
for converting -ve to +ve values;
*/
#include <iostream>

using namespace std;

void f(int n, int a[]) {  
    int t;  
    while (n > 0) {    
        t = n % 10;    
        a[t] = a[t] + 1;    
        n = n / 10;  
    }
}
int main() {
    int a[] = {0,1,2,0};  
    f(1202,a);  
    printf ("%d\n", a[2]);
}
