// implementation of a stack data structure using a singly linked list.

#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Function to add an element
    void push(int item) {
        Node* temp = new Node;
        temp->data = item;
        temp->next = top;
        top = temp;
    }

    // Function to remove an element
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Function to view the top element
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "The plate on top is: " << top->data << endl;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to get the size of the stack
    void size() {
        Node* temp = top;
        int count = 0;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        cout << "Number of plates in the cabinet is: " << count << endl;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.size();
    s.peek();
    s.pop();
    s.peek();
    s.size();
    cout << "Is empty (1=True, 0=False): " << s.isEmpty() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << "Is empty (1=True, 0=False): " << s.isEmpty() << endl;
    return 0;
}
