////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < i + 1; j++) {
				cout << "*";
			}
		}
		else {
			cout << "$";
		}
		cout << endl;
	}

	return 0;
}

prints :
*
$
***
$
*****
$
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void fn1(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd lines → single *
            cout << "*" << endl;
        } else {
            // Even lines → i stars (i is even)
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    fn1(n);
    return 0;
}

prints :
*
* * 
*
* * * * 
*
* * * * * * 
///////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || i == 4 || j == 0 || j == 4) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;

}
prints :
*****
*   *
*   *
*   *
*****
/////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main() {
    // Declare variables and input
    int n;
	cin >> n;
	
	// In a 2*n+1 square, print * if i or j is even.
	for(int i = 0; i < 2 * n + 1; i++) {
		for(int j = 0; j < 2 * n + 1; j++) {
			if(i % 2 == 0 || j % 2 == 0) cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
	
	return 0;
}
prints :
n=2
* * * * *
*   *   *
* * * * *
*   *   *
* * * * *
////////////////////////////////////////////////////////////////////////////////////////////////
