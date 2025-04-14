//their soln:
#include <iostream>
#include <algorithm>

using namespace std;

// Outputs the least common multiple of n and m.
void FindLCM(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0)
            gcd = i;
    }

    cout << n * m / gcd;
}

int main() {
    // Declare variables and input:
    int n, m;
    cin >> n >> m;

    FindLCM(n, m);
    
    return 0;
}
//my code:
#include <iostream>

using namespace std;
int lcmfn(int n, int m)
{
     int greatest=max(n,m);
     int smoll=min(n,m);
     for(int i=greatest; ;i+=greatest)
     {
        if(i%smoll==0)
        {
            return i;
        }
     }
}
int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
int k;
k=lcmfn(n,m);
cout<<k;
    return 0;
}