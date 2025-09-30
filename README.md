# Stack_in_C_Plus_Plus
# Aim:To study and implement Stack implementation using array
# Software Required:
Visual Studio
# Theory:
Stack is the fundamental data structures used in the computer science to the store collections of the objects. It can operates on the Last In, First Out (LIFO) principle where the most recently added the object is the first one to be removed. It can makes the stacks highly useful in the situations where you to the reverse a series of the operations or repeatedly undo operations.

<ins>Stack Data Structure in C++</ins>:
A stack can be visualized as the vertical stack of the elements, similar to the stack of the plates. We can only add or remove the top plate. Similarly, in the stack data structures, elements can added to and removed from the top of the stack.

Stacks can be implemented using the arrays or linked lists:

Array-based implementation: It can uses the simple array to the store the elements of the stack. The pointer is used to the keep of the top of the stack.
Linked List based implementation: Each element in the stack is the node in a linked list. The top of the stack is simply the head of the linked list.

<ins>Applications of the Stack in C++</ins>:
+ It can applies on the Expression Evaluation and it can evaluates the prefix, postfix and infix expressions.
+ It can applies on the Function calls and recursion.
+ It can applies in text editors for undo mechanisms functionalities.
+ It can applies on syntax parsing and syntax checking.

# Implementaion:
Through a Single code the operations on stack such as push and pop were seen in C++

# Algorithms:

Algorithm: Stack using Array

1.Start the program.

2.Define constants and variables:

    Set SIZE = 5 for the maximum size of the stack.

    Declare an integer array arr[SIZE] to store stack elements.

    Set top = -1 to show that the stack is empty.

3.Start Push Process (Repeat 6 times):

    Ask the user to enter a value to push onto the stack.

    Read the value into a variable, say inputVal.

    Check if the stack is full (i.e., top == SIZE - 1):

    If yes, display "Stack Overflow".

    If no:

    Increase top by 1 (top++).

    Store inputVal in arr[top].

    Display a message: "Pushed: <value>".

4.Start Pop Process (Repeat 6 times):

    Check if the stack is empty (i.e., top == -1):

    If yes, display "Stack Underflow".

    If no:

    Display the top value: "Popped: arr[top]".

    Decrease top by 1 (top--).

5.Display Array Content:

    Print all elements of the array arr[0] to arr[SIZE - 1] (for visualization).

6.End the program.


# Conclusion:
The above code demonstrated stack implementaion in C++.
