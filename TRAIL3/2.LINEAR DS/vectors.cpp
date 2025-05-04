/*
Dynamic Arrays
In C++, to declare an array, you would typically do so as follows:

int a[100];
An array declared in this manner is called a static array. With static arrays, you must
 define the size at the time of declaration, and once declared, the size cannot be changed.

However, if the length frequently changes, wouldn't that be a clear waste of memory?
To address this issue, dynamic arrays were introduced.

Dynamic arrays can freely increase or decrease in length. This means they occupy only as much space
 as needed.



In dynamic arrays, the processes of insertion, deletion, and searching are identical to those in
 static arrays, so the time complexity is exactly the same. However, the difference lies in using 
 only the necessary amount of memory.

In C++, dynamic arrays can be represented using vector. To use vector, you need to include the 
#include <vector> header and declare it in the form vector<T> name;. Here, T is the type of elements
 that will be stored in the vector. Also, since vector is originally written as std::vector, 
 it is advisable to use using namespace std; beforehand to allow usage with just vector.

A vector to manage integers can be declared as follows:

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    return 0;
}
The following four operations are frequently used with vector:

push_back(E)

Adds the data E to the end.

pop_back()

Deletes the last data element.

size()

Returns the number of data elements currently in the vector.

Access data by index

Similar to arrays, data can be accessed using an index.

Thus, you can write code as follows:

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;              // Declare a vector to manage integers => empty vector
    v.push_back(5);             // v : [5]
    cout << v.size() << endl;   // Number of data elements: 1
    cout << v[0] << endl;       // Value at index 0: 5

    v.push_back(2);             // v : [5, 2]
    v.push_back(9);             // v : [5, 2, 9]

    cout << v[1] << endl;       // Value at index 1: 2
    cout << v[2] << endl;       // Value at index 2: 9
    cout << v[3] << endl;       // Value at index 3: Does not exist, Error occurs
   
    // To iterate over all data in the current vector,
    // you can use a for loop utilizing the number of elements, v.size().
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;    // Output: 5 2 9 in order

    v.pop_back();                // Remove the last element.

    cout << v.size() << endl;    // Number of data elements: 2

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;    // Output: 5 2 in order

    return 0;
}
Side Note
In C++, besides vector, you can also use data structures like stack, queue, and deque. 
The reason these can be used is that C++ has pre-defined these data structures in the 
STL (Standard Template Library). These data structures defined in the STL are called containers. 
vector, stack, etc., are containers. To iterate over the elements within these containers, 
an iterator is often used.

An iterator should be defined in the following form:

(existing container type)::iterator it;
Thus, an iterator for traversing a vector container holding numbers is defined as follows:

vector<int>::iterator it;
To iterate over a vector using an iterator, you need to know the start and end.
The position of the first element is obtained with v.begin(), and the position after the 
last element is obtained with v.end().
The reason v.end() is the position after the last element, not the last element itself,
 can be understood from the code below.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;              // Declare a vector to manage integers => empty vector
    v.push_back(5);             // v : [5]
    v.push_back(2);             // v : [5, 2]
    v.push_back(9);             // v : [5, 2, 9]

    // Iterate over elements in the Vector container using an Iterator
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++) { // 5 2 9
        cout << *it << endl;                   // Use * to reference the data at the address pointed
		by it
    }    
    return 0;
}
In the for loop in the above code, it starts at the position where the first element is located,
 v.begin(), and advances one step at a time until it becomes v.end(). Since v.end() is the position 
 after the last data, the for loop ends when it becomes v.end(), allowing for a clean implementation. 
 The iterator acts like a pointer, continuously pointing to the address of each element, and to 
 reference the data stored at that address, you must prepend * as you would when referencing a value
 with a pointer. Therefore, in the code, *it is used to print the elements.

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;
        if (command == "push_back") {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (command == "pop_back") {
            if (!v.empty()) {
                v.pop_back();
            }
        } else if (command == "size") {
            cout << v.size() << endl;
        } else if (command == "get") {
            int index;
            cin >> index;
            if (index >= 1 && index <= v.size()) {
                cout << v[index - 1] << endl; // 1-based to 0-based
            }
        }
    }
    return 0;
}
