/*
Functions Receiving Arrays as Arguments
How can we pass an array as an argument to a function?

To understand this, we first need to explore the relationship between arrays and pointers.

What will be the result of the following code?

int arr[4] = {5, 6, 9, 2};

int *x = arr;
cout << *x;
Interestingly, the output will be 5, which is arr[0].

Arrays are actually composed of consecutive addresses, as shown below.



For instance, if the location of arr[0] is 0x900, since an int is 4 bytes,
 the location of arr[1] would be 0x904, arr[2] would be 0x908, and so on.

The variable arr actually points to &arr[0], the address of the first element.
 This is because the address of the first element can be represented as arr + 0,
 the second element as arr + 1, and so forth.



Therefore, when you create a pointer x and assign arr to it, 
it points to the address of the first element.

What about the following code?

int arr[4] = {5, 6, 9, 2};

int *x = arr;
x++;

cout << *x << endl;        // 6
cout << *(x + 1) << endl;  // 9
Adding 1 to the pointer value changes the address to point to the next element. 
Since x is an int pointer, adding 1 actually adds 4 to the address to point to the next element. 
Thus, *x results in 6. Similarly, *(x + 1) results in 9 because (x + 1) is an operation that 
adds 1 to the pointer, pointing to the next element.

Since arr itself represents the address of the first element &arr[0], 
you can also access the 1st, 2nd, and 3rd elements as follows:

int arr[4] = {5, 6, 9, 2};

cout << *arr << endl;           // 5
cout << *(arr + 1) << endl;     // 6
cout << *(arr + 2) << endl;     // 9
In other words, *(arr + i) is equivalent to arr[i], which means (arr + i) is the same as &arr[i].

So, what should you pass to a function to pass an array as an argument? 
You simply pass arr. Since arr represents the address of the first element 
and arrays are allocated consecutively, passing arr allows you to use it as
 if the entire array has been passed.

Here is the code:

void Modify(int *x) {
    cout << x[0] << endl;  // 5
    cout << x[1] << endl;  // 6

    x[0] = 100;
}

int main() {
    int arr[4] = {5, 6, 9, 2};
    Modify(arr);
    cout << arr[0] << endl; // 100
    return 0;
}
Modify(arr) passes the address of the 0th element of arr, which can
 be understood as passing the array itself. However, as shown in void
 Modify(int *x), you must declare the function's parameter type as a pointer 
 to actually pass the address of arr declared in the main function. Although 
 x is a pointer, you can access the values at index 0 and 1 within the Modify 
 function as if referencing an array, and you can also modify these values.
 Since this is all based on addresses (references), the actual values remain 
 changed even after exiting the function.

Side Note
When passing an array as a function argument, you can also use the form int x[] 
instead of a pointer, as shown below:

void Modify(int x[]) {
    cout << x[0] << endl;  // 5
    cout << x[1] << endl;  // 6

    x[0] = 100;
}

int main() {
    int arr[4] = {5, 6, 9, 2};
    Modify(arr);
    cout << arr[0] << endl; // 100
    return 0;
}

*/
//my code
#include <iostream>

using namespace std;

int n;
int arr[50];
void fn1(int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]/2<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }

}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    fn1(arr);
    return 0;
}