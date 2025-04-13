//my code:
#include <iostream>

using namespace std;
void printprn(int N)
{
    int cnt=1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            
            cout<<cnt<<" ";
            cnt++;
            if(cnt>9)
            {
                cnt=1;
            }
        }
cout<<endl;
    }
}
int N;

int main() {
    cin >> N;

    // Please write your code here.
printprn(N);
    return 0;
}