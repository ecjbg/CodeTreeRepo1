#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "1";
		}
		cout << endl;
	}

	return 0;

}
//////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
****
****
****
****
///////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
4 2
* * 
* * 
* * 
* * 
/////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int k=2;
    while(k--){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

////////////////////////////////////////////////////////////////
//reverse triangle
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       for(int j=n;j>i;j--)
       {
        cout<<"* ";
       }
       cout<<endl;
    }
    return 0;
}
///////////////////////////////////////////////////////////////////
