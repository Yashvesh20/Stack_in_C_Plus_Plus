Yashvesh Singh 24070123138
#include<iostream>
using namespace std;

const int SIZE = 5;

void push(int arr[], int &top, int value) {
    if(top == SIZE - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = value;
        cout << "Pushed: " << value << endl;
    }
}

void pop(int arr[], int &top) {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped: " << arr[top] << endl;
        top--;
    }
}

int main() {
    int arr[SIZE];
    int top = -1;
    int inputVal;

    cout << "Enter up to 6 values to push into the stack (max size = 5):\n";
    for(int i = 1; i <= 6; i++) {
        cout << "Enter value " << i << ": ";
        cin >> inputVal;
        push(arr, top, inputVal);
    }

    cout << "\nPopping all elements:\n";
    for(int i = 1; i <= 6; i++) {
        pop(arr, top);
    }

    cout << "\nThe array content (not stack state): ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
output:
Enter up to 6 values to push into the stack (max size = 5):
Enter value 1: 34
Pushed: 34
Enter value 2: 89
Pushed: 89
Enter value 3: 12
Pushed: 12
Enter value 4: 20
Pushed: 20
Enter value 5: 22
Pushed: 22
Enter value 6: 54
Stack Overflow

Popping all elements:
Popped: 22
Popped: 20
Popped: 12
Popped: 89
Popped: 34
Stack Underflow

The array content (not stack state): 34 89 12 20 22 
