/*
Global Variables
When writing a function to sum all the elements in a list, is it
 always necessary to pass the list to the function like this?

int SumAll(int *list) {
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum += list[i];

    return sum;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    int total_sum = SumAll(arr);
    cout << total_sum << endl;
}

>> 10
Not necessarily. While it is certainly good practice to pass all 
necessary components to a function as arguments, it is not always required. 
By defining values above the function, they become global variables that 
can be accessed anywhere, allowing the SumAll function to directly reference the arr values.

int arr[4] = {1, 2, 3, 4};

int SumAll() {
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int total_sum = SumAll();
    cout << total_sum << endl;
}

>> 10
One important characteristic of global variables is that they are automatically initialized to 0. When an array is declared, all its elements are filled with 0, and in the case of a variable, it is set to 0.

int arr[10];
int sum;

int main() {
    sum = arr[0];
    for(int i = 1; i <= 5; i++)
        sum += arr[i];

    cout << sum << endl;
}

>> 0
When solving simple problems, it is important to effectively utilize global variables to solve the problem cleanly.

*/