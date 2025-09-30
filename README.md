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

1. Start
2. Initialize an array `arr[SIZE]` and a variable `top = -1`.
3. Push Operation (Insert):
     If `top == SIZE - 1`, display "Stack Overflow".
     Else increment `top` by 1 and insert the new element at `arr[top]`.
4. Pop Operation (Delete):

   * If `top == -1`, display "Stack Underflow".
   * Else print the element at `arr[top]` and decrement `top` by 1.
5. Perform multiple `push` operations and check overflow condition.
6. Perform multiple `pop` operations and check underflow condition.
7. Print the contents of the array.
8. End

# Conclusion:
The above code demonstrated stack implementaion in C++.
