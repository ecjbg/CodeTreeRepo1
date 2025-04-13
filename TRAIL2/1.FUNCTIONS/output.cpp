/*#include<iostream>
using namespace std;
void f(int b) {
    int i;
    for(i = 0; i < 4; i++) {
        a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
    }
}

int a[3][4] = {
    {2, 0, 1, 5},
    {0, 4, 1, 1},
    {1, 4, 0, 0}
};

int main(){
    int i, tot = 0;
	int a[5][5];
    f(1);
    f(2);
    f(0);
    for(i = 0; i < 3; i++) {
        tot = tot + a[i][(i + 1) % 4];
    }
    cout << tot;
    return 0;
}

Intuition
Follow the changes in variable values according to the order of execution.

Algorithm
By executing the code for each index and noting the
 changes in the list values, we can observe the following:


index                0, 1, 2, 3.
Before execution list  [2, 0, 1, 5]
                      [0, 4, 1, 1]
                      [1, 4, 0, 0]

After f(1) list       [2, 0, 1, 5]
                      [4, 0, 0, 1]
                      [1, 4, 0, 0]

After f(2) list       [2, 0, 1, 5]
                      [4, 0, 0, 1]
                      [0, 1, 5, 2]

After f(0) list       [0, 0, 1, 4]
                      [4, 0, 0, 1]
                      [0, 1, 5, 2]

result = 0 + 0 + 2 = 2
This problem asks how the values assigned to each variable change.
If the pattern is not immediately clear, 
it is helpful to practice by following the changes in variable values line by line, as shown below.
*/