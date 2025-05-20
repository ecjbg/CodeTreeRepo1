/*STRINGS PROBLEMS THAT I SOLVED : 
1. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string.
    string str;
    
    // Receive a string including spaces.
    getline(cin, str);
    
    // Receive a lowercase alphabet character.
    char a;
    cin >> a;
    
    // Check the length of the string.
    int len = str.length();
    int cnt = 0;
    
    // Check how many times the given alphabet appears in the string.
    for(int i = 0; i < len; i++)
        if(str[i] == a)
            cnt++;

    // Output the number of times the given alphabet appears.
    printf("%d", cnt);
    
    return 0;
}*/
2.
Declare a string variable to receive two input strings, and then output all parts of each 
string in order, excluding spaces.
Note that the final part of the string, \0, should also be excluded from the output.
#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    int k=s1.length();
    int h=s2.length();
    for(int i=0;i<k;i++)
    {
        if(s1[i]!=' ')
        {
            cout<<s1[i];
        }
    }
    for(int i=0;i<h;i++)
    {
        if(s2[i]!=' ')
        {
            cout<<s2[i];
        }
    }
    return 0;
}

3.
Create a list containing 5 arrays, each with a size of 20, and initialize them with the strings "apple", "banana", "grape", "blueberry", and "orange". Then, create a variable to store the input character a, and set the initial value of the variable cnt to 0.

Initialize i to 0 and execute a for loop that runs as long as i is less than 5, incrementing i by 1 in each iteration. Within this loop, perform the following operations:

In each iteration of the loop, use a conditional statement to check if str[i][2] or str[i][3] is equal to a. If so, print str[i] and increment the value of cnt by 1.
After the for loop concludes, print the value of cnt.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define a list of strings.
    string str[5] = { "apple", "banana", "grape", "blueberry", "orange" };
    
    // Receive an English letter as input.
    char a;
    cin >> a;
    int cnt = 0;

    // Output strings that satisfy the condition and count the number of such strings.
    for(int i = 0; i < 5; i++)
        if(str[i][2] == a || str[i][3] == a) {
            cout << str[i] << endl;
            cnt++;
        }

    // Output the number of strings that satisfy the condition.
    cout << cnt;
    
    return 0;
}
4.
Create an array str[4][21].

Execute a for loop where the initial value of i is 0, and the loop runs only when i is less than 4. Increment i by 1 in each iteration of the for loop, and input a string in each iteration to store it in str[i].

To output the input strings in reverse order, execute a for loop where the initial value of i is 3, and the loop runs only when i is greater than or equal to 0. Decrement i by 1 in each iteration of the for loop, and output str[i] followed by a newline in each iteration.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define a list of strings.
    string str[4];
    
    // Receive input strings.
    for(int i = 0; i < 4; i++)
        cin >> str[i];
    
    // Output the input strings in reverse order.
    for(int i = 3; i >= 0; i--)
        cout << str[i] << endl;
    
    return 0;
}

5.
Algorithm
Implement a string list str[10][201] consisting of 10 strings, each with a maximum size of 201 characters. Declare a variable len_all to store the total length of all strings, initializing it to 0.

Execute a for loop with the initial value of i set to 0, running as long as i is less than 10, and incrementing i by 1 in each iteration. Within each iteration of the for loop, input a string and store it in str[i].

In the same for loop, declare a variable len and use strlen to calculate the length of str[i], storing this length in len. Add the value of len to len_all.

After the for loop concludes, print the value of len_all.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define a list of strings.
    string str[10];
    int len_all = 0;
    
    // Input strings separated by spaces.
    for(int i = 0; i < 10; i++)
        cin >> str[i];
    
    // Check the length of each word and add it to the total length.
    for(int i = 0; i < 10; i++) {
        int len = str[i].length();
        len_all += len;
    }
    
    // Output the total length of the strings.
    cout << len_all;
    
    return 0;
}

6.
Declare a variable to input the integer n, and implement an array str[10][101] with 10 elements, each capable of holding a string of up to 101 characters.

Using a for loop, input and store each of the n strings into str[i].

Execute a for loop with the initial value of i set to 0, and a condition that it runs only while i is less than n, the number of strings. Increment i by 1 with each iteration. Within the loop, use strlen to determine the length of str[i] and store it in len_all. If the first character of the string, str[i][0], is 'a', increment the value of cnt by 1.

After the for loop concludes, print the values of len_all and cnt separated by a space.
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Receive input for n.
	int n;
	cin >> n;
	
    // Implement a string array.
	string str[10];
	
	// Receive input for strings.
	for(int i = 0; i < n; i++)
		cin >> str[i];
	
	// len_all: total length of all strings, cnt: count of strings starting with 'a'
	int len_all = 0;
	int cnt = 0;
	
	// Calculate the total length of all strings and the count of strings starting with 'a'.
	for(int i = 0; i < n; i++) {
		len_all += str[i].length();
		if(str[i][0] == 'a')
			cnt++;
	}
	
	// Output the values required by the problem.
	cout << len_all << " " << cnt;
	
    return 0;
}

7.
Declare a variable to input the integer n, and implement an array str[10][101] with 10 elements, each capable of holding a string of up to 101 characters.

Using a for loop, input and store each of the n strings into str[i].

Execute a for loop with the initial value of i set to 0, and a condition that it runs only while i is less than n, the number of strings. Increment i by 1 with each iteration. Within the loop, use strlen to determine the length of str[i] and store it in len_all. If the first character of the string, str[i][0], is 'a', increment the value of cnt by 1.

After the for loop concludes, print the values of len_all and cnt separated by a space.
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Receive input for n.
	int n;
	cin >> n;
	
    // Implement a string array.
	string str[10];
	
	// Receive input for strings.
	for(int i = 0; i < n; i++)
		cin >> str[i];
	
	// len_all: total length of all strings, cnt: count of strings starting with 'a'
	int len_all = 0;
	int cnt = 0;
	
	// Calculate the total length of all strings and the count of strings starting with 'a'.
	for(int i = 0; i < n; i++) {
		len_all += str[i].length();
		if(str[i][0] == 'a')
			cnt++;
	}
	
	// Output the values required by the problem.
	cout << len_all << " " << cnt;
	
    return 0;
}

8.
Declare a string list str[10][201] with 10 elements, each of size 201.

Execute a for loop with the initial value of i set to 0, and the condition that it runs only when i is less than 10. Increment i by 1 in each iteration of the for loop, and input a string in each iteration to store it in str[i].

In the same for loop, print str[i] followed by a newline in each iteration.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string array.
    string str[10];
    
    // Input strings separated by spaces.
    for(int i = 0; i < 10; i++)
        cin >> str[i];
    
    // Output the strings.
    for(int i = 0; i < 10; i++)
        cout << str[i] << endl;
    
    return 0;
}

9.
Algorithm
Implement a list of strings with 10 elements, each capable of holding a string of size 201.

Create a for loop with an initial value of i set to 0, and a condition that it runs only while i is less than 10. In each iteration of the loop, increment i by 1 and input a string to store in str[i].

Create another for loop with an initial value of i set to 0, and a condition that it runs only while i is less than 10. In each iteration of the loop, increment i by 2 and print str[i].

If you want to print only the strings that were input at even positions, simply change the initial value of i to 1 in the above for loop for printing.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string array.
    string str[10];
    
    // Input strings separated by spaces.
    for(int i = 0; i < 10; i++)
        cin >> str[i];
    
    // Output the strings at odd indices.
    for(int i = 0; i < 10; i += 2)
        cout << str[i] << endl;
    
    return 0;
}

10.
Algorithm
Implement a string list with elements of size 201.

Create a for loop with the initial value of i set to 0, which runs only when i is less than 10. In each iteration of the loop, i is incremented by 1, and a string is input and stored in str[i].

Create another for loop with the initial value of i set to 9, which runs only when i is greater than or equal to 0. In each iteration of the loop, i is decremented by 1, and str[i] is printed.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string array.
    string str[10];
    
    // Input strings separated by spaces.
    for(int i = 0; i < 10; i++)
        cin >> str[i];
    
    // Output the strings in reverse order.
    for(int i = 9; i >= 0; i--)
        cout << str[i] << endl;
    
    return 0;
}

11.
Algorithm
Implement a string array with elements of size 21.

Initialize i to 0 and execute a for loop that runs while i is less than 10, incrementing i by 1 in each iteration. In each loop, input a string and store it in str[i].

Declare a variable to receive the character a, and set the value of cnt to 0.

Execute the same for loop, and in each iteration, use strlen to calculate the length of str[i] and store it in len. If the value of str[i][len−1] is a, print str[i], add a newline, and increment cnt by 1.

After the for loop ends, if the value of cnt is 0, print None.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string array.
    string str[10];
    
    // Receive strings as input.
    for(int i = 0; i < 10; i++)
        cin >> str[i];
    
    // Receive a character as input.
    char a;
    cin >> a;
    int cnt = 0;
    
    // If the given character appears as the last character, print that string. Also, count such occurrences.
    for(int i = 0; i < 10; i++) {
        int len = str[i].length();
        if(str[i][len-1] == a) {
            cout << str[i] << endl;
            cnt++;
        }
    }
    
    // If there are no matching strings, print None.
    if(cnt == 0)
        cout << "None";
    
    return 0;
}

12.
Algorithm
Declare a list of strings and input multiple strings. Calculate and print the average length of the strings whose first character matches the given specific character.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string array.
    string str[20];
    char a;
    int len_sum = 0;
    int cnt = 0;

    // Input
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> str[i];

    cin >> a;
    
    // Calculate the total length and count of strings that meet the condition.
    for(int i = 0; i < n; i++) {
        if(str[i][0] == a) {
            int len = str[i].length();
            len_sum += len;
            cnt++;
        }
    }
  
    // Output the desired values.
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)len_sum / cnt;
    
    return 0;
}

13.
Intuition
After receiving a string as input and storing it in an array, we iterate through the array for the number of characters in the input string, printing each character one by one.

Algorithm
Declare a character array with a length of 10 and receive a string as input.

Set the initial value of i to 0 and ensure the loop executes only when str[i] is not \0. Construct a for loop where the value of i increases by 1 with each iteration. In each iteration of the for loop, print the character str[i] from the string along with a newline.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define a string.
    string str;
    
    // Receive input for the string.
    cin >> str;
    
    // Traverse the string and print each character on a new line.
    for(int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    
    return 0;
}

14.
Algorithm
Declare a character array with a length of 101 to receive a string input, and declare a variable to input an integer a.

Use strlen to find the length of the array str and store it in len, then set the value of the variable cnt to 0.

Write a for loop where the initial value of i is len−1, and the loop executes only when the value of i is greater than or equal to 0. In each iteration of the for loop, the value of i decreases by 1. Include a conditional statement to compare the value of cnt, which represents the number of characters printed so far, with the number of characters to be printed, a. If the value of cnt is greater than or equal to a, use break to exit the for loop. Otherwise, print str[i] and increase the value of cnt by 1.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implement a string.
    string str;
    
    // Receive input for the string.
    cin >> str;
    
    // Receive input for an integer.
    int a;
    cin >> a;
    
    // Get the length of the string.
    // cnt : the number of characters printed so far
    int len = str.length();
    int cnt = 0;
    
    // Print the given number of characters from the end of the string.
    for(int i = len - 1; i >= 0; i--) {
        // Exit the for loop if the given number of characters have been printed.
        if(cnt >= a)
            break;
        cout << str[i];
        cnt++;
    }
    
    return 0;
}
/*my code :

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    string ss;
    cin>>ss;
    int l=ss.length();
    int j;
    cin>>j;
    int h=l-j;
    if(l>j){
    for(int i=l-1;i>=h;i--)
    {
        cout<<ss[i];
    }
    }
    else
    {
        cout<<ss;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string ss;
    cin >> ss;
    int l = ss.length();
    int j;
    cin >> j;

    int h = max(0, l - j);  // protect against negative index

    for (int i = l - 1; i >= h; i--) {
        cout << ss[i];
    }

    return 0;
}


*/

15.
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "baaana";
	int len = s.length();
	s = s.substr(len - 1, 1) + s.substr(0, len - 1);
	cout << s;

	return 0;

}

>> abaaan

16.
