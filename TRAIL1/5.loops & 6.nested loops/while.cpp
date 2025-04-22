/*
while loop
Is it possible to write a program that prints numbers from 5 to 10, one per line, 
using a method other than a for loop?

In such cases, you can use the keyword while to solve the problem.

The format of a while loop is as follows. A while loop is always used with a condition,
 and the code inside the while loop is executed only when the condition is satisfied.

while (condition) {

    // Write the code here that should be executed 
    // only when the condition is satisfied

}
Here, as with a for loop, you must use curly braces { } to clearly define the scope of the 
inside of the while loop.

If you want to print numbers from 5 to 10 one by one, you can write the code as follows, where 
the variable i starts at 5 and increases by 1 only when it is less than or equal to 10, similar 
to a for loop.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int i = 5;             // Initial value (initialization)

	while (i <= 10) {       // Condition for repetition (condition)
		cout << i << endl;    // Write the desired code
		i++;                // Set the desired increment (increment)
	}

	cout << "Done";
	return 0;

}
Output
5
6
7
8
9
10
Done
If you write multiple lines of code inside the while loop as shown below, you will get the 
correct result for each value of i.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int i = 5;

	while (i < 7) {
		cout << i << endl;
		cout << i * 2 << endl;
		i++;
	}

	cout << "Done";
	return 0;

}
Output
5
10
6
12
Done
////////Side note 1
If a while loop does not have a curly brace block to indicate its body, only one line of code 
after the condition is considered part of the loop.

int i = 5;
while (i < 7)
	cout << i << endl;  // Code inside the while loop
	cout << i * 2 << endl; // Code outside the while loop
	i++; // Code outside the while loop
Output
5
5
5
... (infinite loop)
////Side note 2
In C++, there is also a do-while loop in addition to the while loop. The do-while loop is not 
significantly different from the while loop, except that it executes the loop once regardless 
of the condition. In other words, unlike the while loop, which checks the condition first, the 

The format is as follows.

do {

    // Write the code here that should be executed 
    // only when the condition is satisfied, 
    // but it will be executed at least once

} while (condition);
C++ Code
#include <iostream>
using namespace std;

int main() {

	int i = 10;

	do {
		cout << i << endl;
		i++;
	} while (i < 7);

	cout << "Done";
	return 0;

}
Output
10
Done
Even though i is 10, which is greater than 7, the loop is executed once.
*/
1.
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<"*"<<endl;
    }
    return 0;
}
//this code gave an infinite loop.
//correct code:
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"*"<<endl;
    }
    return 0;
}

/*
Decreasing by 1 with a while loop
How can we write a program using a while loop to print numbers decreasing by 1 from 10 to 5?

This can be achieved by modifying the code within the while loop to decrease the 
increment value by 1.

Code to increase by 1 from 5 to 10
	int i = 5;              // Starting value

	while (i <= 10) {       // Condition to continue looping   
		cout << i << endl;  // Desired code to execute
		i++;                // Set the desired increment value                  
	}
Code to decrease by 1 from 10 to 5
	int i = 10;            // Starting value

	while (i >= 5) {       // Condition to continue looping   
		cout << i << endl; // Desired code to execute
		i--;               // Set the desired decrement value          
	}
Therefore, the following code produces a result that decreases by 1 from 10 to 5.

C++ Code
#include <iostream>
using namespace std;

int main() {

	int i = 10;

	while (i >= 5) {
		cout << i << endl;
		i--;
	}

	cout << "Done";
	return 0;
}
Output
10
9
8
7
6
5
Done
*/
1.


//wrong code.
//corrected code : this is codetree soln btw.
#include <iostream>

using namespace std;

int main() {
    // Declare variables and input
    int a, b;
    cin >> a >> b;
    
    // Output the integer part first.
    cout << a / b << ".";
    
    // Start with the remainder of a divided by b
    // and calculate each decimal place.
    a %= b;
    for(int i = 0; i < 20; i++) {
        // Multiply the remainder by 10
        // and find the quotient when divided by b.
        a *= 10;
        cout << a / b;
        
        // Continuously update the remainder of a divided by b.
        a %= b;
    }
    
    return 0;
}


3. 
#include <iostream>
using namespace std;
bool digit369(int i)
{
    while (i > 0) {
        int digit = i % 10;
        if (digit == 3 || digit == 6 || digit == 9) return true;
        i /= 10;
    }
    return false;
}
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    if(i%3==0 || digit369(i))
    {
       cout<<"0"<<" ";
    }
    else
    {
        cout<<i<<" ";
    }
    }
    return 0;
}
//369 game.