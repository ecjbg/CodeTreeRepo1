/*Recursive Functions
Can we consider a problem where we print 5 stars over n lines as follows?


When n = 3

*****
*****
*****
If we define PrintStar(n) as a function that correctly 
prints stars from the 1st to the nth line, this function 
can be defined to first execute PrintStar(n−1) to correctly 
print stars from the 1st to the (n−1)th line, and then print the nth line. 
This kind of function, where the same function f is used again to 
implement the function itself, is called a recursive function.

The skeletal code would look like this:


void PrintStar(int n) {  // Function to print stars from the 1st to the nth line
    PrintStar(n - 1);    // Function to print stars from the 1st to the n-1th line
    for(int i = 0; i < 5; i++)
        cout << "*";
    cout << endl;
}
However, if you execute PrintStar(5) using this code, 
the program will never terminate. This is because the PrintStar(5)
 function calls PrintStar(4), which calls 3, and 3 calls 2, and so on 
 indefinitely. Therefore, the most crucial element in a recursive function 
 is the termination condition. Only by setting an appropriate termination 
 condition will the recursive function operate correctly.

Let's consider the case where n is 1. By the function definition, 
it is a function that prints stars from the 1st to the 1st line, 
so after executing PrintStar(0), it prints 5 stars for the 1st line. 
This works correctly. However, if n is 0, by the function definition, 
it is a function that prints stars from the 1st to the 0th line, 
and as per the current structure, it calls PrintStar(−1) and then prints 5 stars.

Can you see where the mistake is? When n is 0, 
by the function definition, no stars should be printed, 
and the recursive function should exit. This is the termination condition.

Therefore, if you write the code as follows, you will get the correct result.


void PrintStar(int n) {  // Function to print stars from the 1st to the nth line
    if(n == 0)           // If n is 0, do not proceed further
        return;          // Exit.

    PrintStar(n - 1);    // Function to print stars from the 1st to the n-1th line
    for(int i = 0; i < 5; i++)
        cout << "*";
    cout << endl;
}

int main() {
    cout << "start" << endl;
    PrintStar(3);
    cout << "end" << endl;
    return 0;
}
In a function that does not return a value, 
if you want to terminate the function, you can simply write return without a value,
 and the function will automatically return and exit when it reaches the end.
 At this point, it is important to carefully observe where the function retreats to.

Therefore, the function retreats to the place where 
it was called the moment it returns, and the function 
that retreated continues from its previous state. 
It is essential to understand this process well.
*/
//my code:
#include <iostream>

using namespace std;
void printStuff(int N)
{
    if(N==0)
    {
        return;
    }
    printStuff(N-1);
    cout<<"HelloWorld"<<endl;
}
int N;

int main() {
    cin >> N;

    // Please write your code here.
    printStuff(N);
    return 0;
}