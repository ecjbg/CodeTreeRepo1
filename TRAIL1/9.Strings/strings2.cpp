#include<bits/stdc++.h>
using namespace std;
int main()
{
string s = "congratulation"; 
for (int i = 0; i < 14; i++){
    if (s[i] == 'a' || s[i] == 'e') continue;
    if (s[i] == 'i' || s[i] == 'o') continue;
    if (s[i] == 'u') continue;
    cout<< s[i];
}
cout<< endl;
}
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    // Conversion
    string encoded = "";

    // Read the first value of the input and initialize.
    char curr_char = A[0];
    int num_char = 1;
    for(int i = 1; i < A.length(); i++){
        if(A[i] == curr_char){
            // If it is the same as the current character, just add to the count of
			//consecutive characters and continue.
            num_char++;
        }
        else {
            // If it is different from the current character, it needs to be changed to a
			//new character.
            // Record the curr_char and num_char counted so far.
            encoded += curr_char;
            encoded += to_string(num_char);
            // Initialize curr_char and num_char with the current value.
            curr_char = A[i];
            num_char = 1;
        }
    }
    // Record the curr_char and num_char corresponding to the last chunk.
    encoded += curr_char;
    encoded += to_string(num_char);

    cout << encoded.length() << endl << encoded;
    return 0;
}
/////////////////////////////////////////////////////////gpt soln:
#include <iostream>
#include <sstream> // for ostringstream
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int count = 1;
    ostringstream compressed; // to build compressed string

    for (int i = 1; i <= n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            compressed << s[i - 1] << count;
            count = 1;
        }
    }

    string result = compressed.str();
    cout << result.length() << result << endl;

    return 0;
}

