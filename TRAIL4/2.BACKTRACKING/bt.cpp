/*Choosing One of K Items N Times (Simple)
When a function f uses the same function f again to implement itself, 
it is called a recursive function. If you are not familiar with recursive functions, it is
 recommended to study the recursive function section in the Novice Mid problem set before reading 
 this article.

For example, let's write code to calculate the sum of natural numbers from 1 to N. This can be 
done using a for loop, but it is also possible to write it using a recursive function. Let's recall
 that a recursive function is mainly divided into a termination condition and a recursive call part.*/

#include <iostream>

using namespace std;

int get_sum(int n) {
    // Termination condition
    if (n == 1)
        return 1;
    
    // Recursive call
    return n + get_sum(n - 1);
}

int main() {
    int n = 5;
    cout << get_sum(n) << endl;
}
/*The recursive function get_sum(n) written above to calculate the sum from 1 to n will operate as 
follows.


Most algorithm problems can be solved by creating all possible combinations and selecting the desired 
answer from them. If the limit on n is small and the time taken to create all combinations is less than
 the time limit given in the problem, it is always best to create all combinations for readability and
 ease of coding. However, creating various permutations and combinations like (1,1,1,1,1), (1,1,1,1,2)
 , (1,1,1,1,3), (1,1,1,2,1), (1,1,1,2,2), etc., using only for loops can be quite challenging. In such
 cases, using recursive functions can help generate all desired permutations and combinations.

For example, let's write code to print all n-digit binary numbers when n is given. We want to print
 these binary numbers in increasing order. If n is 2, they should be printed in the order 00, 01, 10, 
 11.

We will approach this as follows. For instance, if n is 3, we need to create 3 digits, and each digit 
can be either 0 or 1. Therefore, we start at the first digit and decide whether to put 0 or 1. Then, 
we choose either 0 or 1 for the second digit, and similarly for the third digit. Once the third digit 
is filled, we print the current number (e.g., 011 in the diagram) and recursively repeat the process 
to create the next number.



To generate all desired binary combinations, we will use a function called Choose(int curr_num). When
 using a function, it is crucial to clearly define the function's definition. Let's define the Choose
 function as follows.

Choose(int curr_num): A function that selects 0 or 1 at the curr_num position
Since we start without having chosen any numbers, the initial call according to the function 
definition is Choose(1). For convenience, let's denote the Choose function as C.



Since the first digit can be either 0 or 1, the function C(1) must choose between 0 and 1. After 
making a choice, we need to determine the second digit, so we call C(2).



Now, after C(2) chooses 0 or 1, it calls C(3), and C(3) follows the same process to call C(4).


At each step, as numbers are chosen, they are added to a list in order. This list will be used later
 to print the generated binary numbers.


When we reach C(4), according to the function definition, we need to decide the number for the fourth 
position. However, since N=3, we only need to decide up to the third position, so we stop further
 processing, print the current list, and retreat using return. In this recursive function, the 
 termination condition is when curr_num == n + 1. Additionally, when retreating in a recursive 
 function, we must remove the number added to the list just before entering, to fairly give the 
 next number a chance.

By recursively exploring in this manner, you can generate all the desired numbers.
Let's express this in code.

First, define the Choose(int curr_num) function. Since this function does not return any value, its
 type is set to void. The function is broadly divided into a termination condition and recursive
 function call code, and is defined as follows.

Choose(int curr_num): A function that selects 0 or 1 at the curr_num position*/
#include <iostream>
#include <vector>

using namespace std;

int n = 3;
vector<int> answer;

void PrintAnswer() {
    for (int i = 0; i < answer.size(); i++) 
        cout << answer[i] << " ";
    cout << endl;
}

void Choose(int curr_num) {
    // Termination condition
    if (curr_num == n + 1) {
        PrintAnswer();
        return;
    }

    // Recursive call when 0 is chosen
    answer.push_back(0);
    Choose(curr_num + 1);
    answer.pop_back();

    // Recursive call when 1 is chosen
    answer.push_back(1);
    Choose(curr_num + 1);
    answer.pop_back();

    return;
}

int main() {
    Choose(1);
    return 0;
}
/*Let's examine the recursive function code.

The termination condition is when curr_num == n + 1. At this point, you should print the values listed.

When placing 0 at the current curr_num position, add the number 0 to the end of the list and call 
the function Choose(curr_num + 1) for the next digit. After exiting the function, write code to remove
 the number at the end of the list to prepare for the next number.
Similarly, placing 1 at the curr_num position can be handled in the same way.

Let's look at how the code works in detail with a recursion tree.


Looking at the code for the recursive function call part, except for the part where numbers are added 
to the list when choosing 0 and 1, the code is identical. Therefore, this part can be replaced using a
 for loop as follows. This is useful when the numbers to be chosen are not just 0 and 1, but k numbers.

void Choose(int curr_num) {
    // Termination condition
    if (curr_num == n + 1) {
        PrintAnswer();
        return;
    }

/*
    // Recursive call when 0 is chosen
    answer.push_back(0);
    Choose(curr_num + 1);
    answer.pop_back();

    // Recursive call when 1 is chosen
    answer.push_back(1);
    Choose(curr_num + 1);
    answer.pop_back();
*/

    // Recursive call using a loop to choose 0 and 1
    for (int select = 0; select <= 1; select++) {
        answer.push_back(select);
        Choose(curr_num + 1);
        answer.pop_back();
    }

    return;
}
///////////////////////////////////////////////////////////////////////////////////////////
/////////backtracking qn:
#include <iostream>
#include <vector>
using namespace std;

int k, n;

void generate(vector<int> &current, int depth) {
    if (depth == n) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= k; i++) {
        current.push_back(i);
        generate(current, depth + 1);
        current.pop_back(); // backtrack
    }
}

int main() {
    cin >> k >> n;
    vector<int> current;
    generate(current, 0);
    return 0;
}
/////////CT soln:
#include <iostream>
#include <vector>

using namespace std;

int k, n;
vector<int> selected_nums;

// Prints the selected elements.
void PrintPermutation() {
    for(int i = 0; i < (int) selected_nums.size(); i++)
        cout << selected_nums[i] << " ";
    cout << endl;
}

void FindPermutations(int cnt) {
    // If all n elements are selected, print the result.
    if(cnt == n) {
        PrintPermutation();
        return;
    }

    // Explore the case where each number from 1 to k is selected.
    for(int i = 1; i <= k; i++) {
        selected_nums.push_back(i);
        FindPermutations(cnt + 1);
        selected_nums.pop_back();
    }
}

int main() {
    cin >> k >> n;
    
    FindPermutations(0);
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
