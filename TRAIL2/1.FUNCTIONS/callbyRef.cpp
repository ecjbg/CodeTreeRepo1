/*Swap Function
What result will the following code produce?

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main() {
    int n = 10, m = 20;
    swap(n, m);
    cout << n << " " << m;
    return 0;
}
The result will be as follows:

20 10
10 20
To interpret the result, after the swap function is called, 
the values of a and b are swapped, resulting in 20 10 being printed.
 However, after exiting the function, the values of n and m remain unchanged, so 10 20 is printed.

Why does this happen?

In C/C++, when arguments are passed to a function,
 they are passed by copying the values. 
 This means that instead of passing n and m themselves,
 the values 10 and 20 stored in n and m are copied into new variables a and b. 
 This phenomenon is called Call By Value. Since the values are copied,
 within the function, a and b are swapped, resulting in 20 10. However, 
 after exiting the function, the values of n and m remain unchanged, so the output is 10 20.

Is there a way to change the actual values of n and m after the function call using the same pattern?

This is where Pointers come into play.

A pointer is used to represent the address of a variable. Let's look at the following code:

int a = 10;
int *x = &a;
cout << *x << endl;

*x = 20;
cout << a << endl;
Interestingly, the result will be:

10
20
Initially, the variable a is assigned the value 10. 
Then, x is declared as a pointer to an int variable, pointing to the address of a.

int *x;


To make the pointer x point to the address of variable a, 
we assign it the value &a, which represents the address of a.
 Now, x points to the address of a.

int *x = &a;


To reference the value stored at the location pointed to by x, we use the * operator.

cout << *x << endl; // Outputs 10


Using pointers, we can change the value stored at the 
location pointed to by x using x. This can be expressed as ∗x=v.

*x = 20;
cout << a << endl; // Outputs 20


Let's review this process step by step.

Therefore, the swap function can be implemented as follows:

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b << endl;
}

int main() {
    int n = 10, m = 20;
    swap(&n, &m);
    cout << n << " " << m;
    return 0;
}
By changing the parameter types of the function to int *, 
and passing the addresses of n and m (&n, &m) to the swap function, 
the values can be swapped using ∗a and ∗b within the function,
 resulting in the actual values of n and m being changed.

Thus, the result will be:

20 10
20 10
This process is known as Call By Reference.

In C++, to make this even more concise, 
you can implement Call By Reference without using pointers at all, 
by using only the & operator. The code is as follows:

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main() {
    int n = 10, m = 20;
    swap(n, m);
    cout << n << " " << m;
    return 0;
}
In the Call By Value code, the parameter types are changed from int to int &. 
With this notation, when n and m are passed, it is as if their actual addresses are passed,
 allowing a and b to act as their proxies. When a and b are modified, the actual values
 of n and m are affected. This pattern is more commonly used in C++, so be sure to remember it.
 */
 //my code:
 #include <iostream>

using namespace std;

int n, m;
void swap(int &n,int &m)
{
    int temp;
    temp=n;
    n=m;
    m=temp;
    cout<<n<<" "<<m<<endl;
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    swap(n,m);
    return 0;
}