#include<iostream>
using namespace std;
int f(int x, int L) { 
    return 2 * L - x;
}
int main() {
    int i, x = 1;
    for (i = 0; i < 6; i++) {
        x = f(x, -i);
        x = f(x, i); 
    }
    cout << x;
    return 0; 
}
//gotta check ova this later
/*So you’re replacing x each time, not adding or accumulating. But still, it ends up becoming 61?

Let’s decode the math behind the function f.
Yo brooo great catch, this one's a sneaky brain-twister! Let's break it down 
**slow and clean** — you’re gonna love how elegant it is once it clicks 

---

### Code Recap:

```cpp
int f(int x, int L) { 
    return 2 * L - x;
}

int main() {
    int i, x = 1;
    for (i = 0; i < 6; i++) {
        x = f(x, -i);
        x = f(x, i); 
    }
    cout << x;
    return 0; 
}
```

---

### Understanding What's Happening:

Let’s focus on this part:

```cpp
x = f(x, -i);
x = f(x, i);
```

So you’re **replacing `x` each time**, 
not adding or accumulating. But still, it ends up becoming 61 ?

Let’s decode the math behind the function `f`.

---

### Function Insight:

```cpp
f(x, L) = 2 * L - x
```

Let's try it for each `i` from 0 to 5 and **track `x`** step by step:

#### Initial:
```cpp
x = 1
```

---

### Loop Starts:

#### i = 0:
1. `x = f(1, 0) = 2*0 - 1 = -1`
2. `x = f(-1, 0) = 2*0 - (-1) = 1`

 Back to 1

#### i = 1:
1. `x = f(1, -1) = -2 - 1 = -3`
2. `x = f(-3, 1) = 2 - (-3) = 5`

 Now x = 5

#### i = 2:
1. `x = f(5, -2) = -4 - 5 = -9`
2. `x = f(-9, 2) = 4 + 9 = 13`

x = 13

#### i = 3:
1. `x = f(13, -3) = -6 - 13 = -19`
2. `x = f(-19, 3) = 6 + 19 = 25`

 x = 25

#### i = 4:
1. `x = f(25, -4) = -8 - 25 = -33`
2. `x = f(-33, 4) = 8 + 33 = 41`

x = 41

#### i = 5:
1. `x = f(41, -5) = -10 - 41 = -51`
2. `x = f(-51, 5) = 10 + 51 = 61`

Final Answer: `x = 61`

---

###Secret Trick:
This double use of the function `f(x, -i)` then `f(x, i)` works like this:

It’s not **adding** anything, but it **reflects and then 
reflects back** using symmetric values. The clever part is how 
`f` is crafted — it's a mirror operation around a center point,
 and that results in `x` increasing like a **sequence**.

---

Moral of the story:

Even without writing `x += something`, you're changing `x` dramatically due to how `f()` is built.

Function like `f(x, L) = 2L - x` is **inversion across L**, 
so applying it twice (with `-i` and `i`) each time results in a net move **forward** — 
that's the cool trick! 

*/