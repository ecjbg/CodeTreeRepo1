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
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i >= 0; i--) {
		for (int j = 0; j <= 2 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}
***
**
*
**
***
#include <iostream>
using namespace std;

int main() {

	int cnt = 3;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < cnt; j++) {
			cout << "*";
		}
		cout << endl;

		if (i < 2) {
			cnt--;
		}
		else {
			cnt++;
		}
	}

	return 0;

}

/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
void fn1(int n)
{
    while(n--)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    fn1(n);
    return 0;
}
 prints out:
 **** **** **** ****
*** *** ***        
** **
*
//////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
void fn1(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    fn1(n);
    return 0;
}

prints out :
*
* *
* * *
* *
*
////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void printSymmetricPattern(int n) {
    // Decreasing part
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Increasing part (start from 2 to avoid repeating the middle line)
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printSymmetricPattern(n);

    return 0;
}
////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}
prints :
  *
 ***
*****
////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void printReversePyramid(int n) {
    int stars = 2 * n - 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < stars - 2 * i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;
    printReversePyramid(n);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void printCenteredPyramid(int n) {
    int totalStars;

    for (int i = 0; i < n; i++) {
        totalStars = 2 * i + 1;

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Print stars
        for (int j = 0; j < totalStars; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;
    printCenteredPyramid(n);
    return 0;
}
//////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void printHollowInvertedTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;
    printHollowInvertedTriangle(n);
    return 0;
}
prints :
******
**  **
*    *

//////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 * i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}
prints :
*
****
*******
//////////////////////////////////////////////////////////////////////////////////