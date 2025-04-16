/*#include<iostream>
using namespace std;


int f(int n) {  
    if (n < 2)    
        return 0;  
    for(int d = n - 1; d > 1; d--) {    
        if (n % d == 0)      
            return 0;  
    }  
    return 1;
}
int main() {  
    cout << f(1) << " ";
    cout << f(11) << " ";
    cout << f(21) << " ";
    cout << f(31) << " ";
    return 0;
}

//Ayy :

---

### Why I *didn't* pass `a[]` and `b[]` into `isSubarray()`:

Because `a[]`, `b[]`, `n1`, and `n2` are declared **globally**
 (outside all functions), they can be accessed directly **inside any function** 
 — including `isSubarray()`.

That's why we didn't *need* to pass them as parameters.

---

### But what if we DID pass them?

Totally possible. Here's how that would look:

```cpp
bool isSubarray(int a[], int b[], int n1, int n2) {
    for (int i = 0; i <= n1 - n2; i++) {
        bool found = true;
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}
```

And then in `main()`:

```cpp
if (isSubarray(a, b, n1, n2))
    cout << "Yes";
else
    cout << "No";
```

---

### When to use which style?

| Style | When to use |
|------|-------------|
| **Global variables** | For small projects or quick contest code where cleanliness isn’t priority |
|**Passing as parameters** | For cleaner, modular code. Better for large projects, 
libraries, or interviews |

---

### TL;DR

- We didn’t need to pass them because they were global.
- But it's often *better practice* to pass arrays & sizes explicitly 
— makes your code more reusable and clean.
- Both styles are okay depending on your goal.

---

*/
my code:
#include <iostream>
using namespace std;

int n1, n2;
int a[100], b[100];

bool isSubarray() {
    for (int i = 0; i <= n1 - n2; i++) {
        bool found = true;
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    if (isSubarray())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
/* if we did pass parameters:
bool isSubarray(int a[], int b[], int n1, int n2) {
    for (int i = 0; i <= n1 - n2; i++) {
        bool found = true;
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}
*/
