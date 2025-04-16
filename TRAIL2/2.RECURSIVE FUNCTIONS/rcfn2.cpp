The Importance of Print Position in Recursive Functions
Consider a problem where you need to print stars on each line
 corresponding to the line number, over n lines.


When n = 3

*
**
***
If we define a function PrintStar(n) to correctly print 
stars from the 1st to the nth line, this function can be defined
 to first execute PrintStar(n - 1) to correctly print stars from 
 the 1st to the n−1th line, and then print the nth line.

The base case will be when n is 0, and the structure of the code is as follows:


void PrintStar(int n) {        // Function to print stars from the 1st to the nth line
    if(n == 0)                 // Base case
        return;

    PrintStar(n - 1);          // Function to print from the 1st to the n-1th line
    for(int i = 0; i < n; i++) // Print n stars on the nth line
        cout << "*";
    cout << endl;
}
Executing the above code will yield the expected result.


PrintStar(3);

>> *
   **
   ***
However, if the order of the part that performs the output
 and the part that calls the PrintStar function is reversed,
 can you predict what the output will be?


void PrintStar(int n) {        // Function to print stars from the 1st to the nth line
    if(n == 0)                 // Base case
        return;

    for(int i = 0; i < n; i++) // Print n stars on the nth line
        cout << "*";
    cout << endl;
    PrintStar(n - 1);          // Function to print from the 1st to the n-1th line
}
You will get an inverted triangle shape. This is because n 
stars are printed first before proceeding to print from the 1st to the n−1th line.


PrintStar(3);

>> ***
   **
   *
Let's look at one more example. What result will you get when you execute the following code?


void PrintStar(int n) {
    if(n == 0)
        return;

    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    PrintStar(n - 1);
    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}
You will get a shape where two right-angled triangles are 
attached top and bottom. If you imagine it broadly, you can 
expect that n stars are printed just before executing PrintStar(n - 1),
 and after processing n−1, n stars are printed again, thus filling stars inward continuously.


PrintStar(3);

>> ***
   **
   *
   *
   **
   ***
As such, in recursive functions, depending on where you 
define the print statement, you can receive results that are completely 
different from what you expected. Therefore, you must fully understand 
how recursive functions operate, draw the call stack, and follow how each 
function is called and what values are produced to write the code effectively.

