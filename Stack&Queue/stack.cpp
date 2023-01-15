// Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

// Stack Syntax:-

// For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:

// template <class Type, class Container = deque<Type> > class stack;
// Type – is the Type of element contained in the std::stack. It can be any valid C++ type or even a user-defined type.

// Container – is the Type of underlying container object.

// Member Types:-

// value_type- The first template parameter, T. It denotes the element types.

// container_type- The second template parameter, Container. It denotes the underlying container type.

// size_type- Unsigned integral type.
  
// The functions associated with stack are: 
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
       
    stack.pop();
    stack.pop();
   
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}