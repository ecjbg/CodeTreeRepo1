/*#include<iostream>
using namespace std;
int f(int x, int y, int z) {  
    if (x > y) {    
        if (x > z) {      
            return x;    
        }    
        else {      
            return z;    
        }  
    }  
    else {   
        if (y > z) {     
            return y;   
        }   
        else {     
            return z;   
        }  
    }
}
int main() {  
    cout << f(2, 3, 4) << " " << f(4, 3, 2) << " " << f(3, 2, 4) << endl;
    return 0;
}
*/
#include <iostream>

using namespace std;

int a, b;
bool digitEnd5(int i)
{
    return (i % 2 != 0 && i % 5 == 0);
}
//no need of if (condition) return true;
//else return false;

bool digitby3(int i)
{
    if(i%3==0 && i%9!=0)
    {
        return true;
    }
    else{
        return false;
    }
}
void fn1(int a,int b)
{
    int c=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==0 || digitEnd5(i)|| digitby3(i))
        {
           c++;
        }
    }
    int j=b-a+1;
    cout<<j-c;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    fn1(a,b);
    return 0;
}
