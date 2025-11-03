#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next_ptr;
};

// Stack implementation using linked list
class Stack {
private:
    Node* top;  // pointer to top of the stack

public:
    // Constructor
    Stack() {
        top = nullptr;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Check if stack is full (in linked list, it's rarely full unless memory runs out)
    bool isFull() {
        Node* temp = new(nothrow) Node;
        if (temp == nullptr)
            return true;  // memory allocation failed
        delete temp;
        return false;
    }

    // Push new element onto stack
    void push(string value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push more elements.\n";
            return;
        }
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next_ptr = top; // new node points to previous top
        top = newNode; // update top
        cout << value << " pushed to stack.\n";
    }

    // Pop top element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! No elements to pop.\n";
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped from stack.\n";
        top = top->next_ptr; // move top to next
        delete temp;
    }

    // Peek top element
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    // Display all stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* current = top;
        cout << "Stack elements (top to bottom): ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next_ptr;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Stack s;

    s.push("test1");
    s.push("test2");
    s.push("test3");

    s.display();
    s.peek();

    s.pop();
    s.peek();

    s.display();

    return 0;
}
