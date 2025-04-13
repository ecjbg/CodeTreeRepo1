/*
*****
** **
* * *
** **
*****

question's code:
void draw(int n) {  
    for (int i = 1; i <= n; i++) {    
        for (int j = 1; j <= n; j++)      
            if (i == 1 || i == n || j == 1 || (A) || j == n) 
                printf("*"); 
            else 
                printf(" ");    
        printf("\n");  
    }
}
A=(j==i)||j==n-i+1
*/
//my code for gcd:
#include <iostream>

using namespace std;
int gcdfn(int n,int m)
{
    int r= min(n, m);
    while (r > 0) {
        if (n % r== 0 && m % r == 0) {
            break;
        }
        r--;
    }

    // Return gcd of a and b
    return r;
}
int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int k;
    k=gcdfn(n,m);
    cout<<k;
    return 0;
}