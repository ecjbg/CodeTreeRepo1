Thinking About the Problem Top Down
We are tasked with writing a program to count the numbers 
between 1 and 100 that are not multiples of 3 but are multiples of 5. 
What is the most elegant way to solve this problem?

When considering how to solve this problem on a large scale, it can be broken down as follows:


1. Check each number i from 1 to 100.
2. Verify if the number i meets the problem's conditions, and if so, increase the count by 1.
3. Print the answer.
Thinking in this way leads to the following code structure:


int main() {
    int cnt = 0;
    for(int i = 1; i <= 100; i++)
        if(IsMagicNumber(i))
            cnt++;

    cout << cnt;
    return 0;
}
In other words, as long as we have a well-defined function that determines
 whether i is a magic number according to the problem's conditions,
 we can easily solve this problem. By writing the large-scale code 
 first and then implementing the necessary functions,
 we improve readability and significantly reduce the likelihood of errors during code writing.

In this example, the IsMagicNumber function takes one argument and determines
 whether the given number is special. Therefore, we need to define a function 
 that returns a boolean value, either True or False.


bool IsMagicNumber(int n) {
    return n % 3 != 0 && n % 5 == 0;
}

int main() {
    int cnt = 0;
    for(int i = 1; i <= 100; i++)
        if(IsMagicNumber(i))
            cnt++;

    cout << cnt;
    return 0;
}

>> 14
//
When a Function Calls Another Function
We are attempting to write a program that counts the number of two-digit 
numbers that are not multiples of 3 and have different tens and units digits. 
What is the most elegant way to solve this problem?

When considering how to solve this problem on a larger scale, it can be broken down as follows:


1. Examine each number i between 10 and 99.
2. Check if the number i meets the problem's conditions, and if so, increase the count by 1.
3. Print the answer.
With this approach, the following code structure can be created:


int main() {
    int cnt = 0;
    for(int i = 10; i < 100; i++)
        if(IsMagicNumber(i))
            cnt++;

    cout << cnt;
    return 0;
}
While attempting to write the IsMagicNumber function, 
it seems that it is not a simple function that can be written immediately. 
Therefore, it is beneficial to think about how to structure IsMagicNumber on a larger scale as well.


1. It is not a multiple of 3.
2. It is a magic number only if the digits in each place are different.
Based on the above description, the IsMagicNumber function is completed as follows:


bool IsMagicNumber(int n) {
    return n % 3 != 0 && AllDifferent(n);
}
Thus, the AllDifferent function also needs to be defined. Since only two-digit numbers are given,
 it can be written relatively simply by using the fact that the tens digit is the quotient of n 
 divided by 10, and the units digit is the remainder when n is divided by 10.


bool AllDifferent(int n) {
    return (n / 10) != (n % 10);
}
Therefore, the above problem can be solved as follows. If the problem 
you are trying to solve is complex, it is advisable to think broadly, 
assume that the necessary functions are already provided, write the code,
 and then proceed to write the functions that were actually needed.


bool AllDifferent(int n) {
    return (n / 10) != (n % 10);
}

bool IsMagicNumber(int n) {
    return n % 3 != 0 && AllDifferent(n);
}

int main() {
    int cnt = 0;
    for(int i = 10; i < 100; i++)
        if(IsMagicNumber(i))
            cnt++;

    cout << cnt;
    return 0;
}

>> 54

//my code: for the 369 question
#include <iostream>

using namespace std;
bool contain369(int i)
{
    while(i>0)
    {
        int digit=i%10;
        if(digit==3||digit==6||digit==9)
        {
            return true;
        }
        i/=10;
    }
    return false;
}
int threeStuff(int a,int b)
{
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if(i%3==0 ||contain369(i))
        {
            cnt++;
        }
        
        
    }
    return cnt;
}
int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int k;
    k=threeStuff(a,b);
    cout<<k;
    return 0;
}
