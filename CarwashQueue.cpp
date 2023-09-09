//simulates a carwash queue

#include <iostream>
#include <queue>
using namespace std;

class Queue {
    // Queue as member variable
    queue<int> qu;

public:
    void enqueue(int x) {
        // Pushing an element x into the queue
        qu.push(x);
    }

    // Function to remove an element from the queue
    void dequeue() {
        // if queue is empty
        if (qu.empty()) {
            cout << "The Queue is empty" << endl;
        }
        // Dequeue an item from the queue
        qu.pop();
    }

    // Function to return the front element of the queue
    int peek() {
        // if queue is empty
        if (!qu.empty())
            return qu.front();
        cout << "The Queue is empty" << endl;
        return -1;
    }

    // Function to return the size of the queue
    int size() {
        return qu.size();
    }

    // Function to check if the queue is empty or not
    bool isEmpty() {
        return qu.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Queue Front: " << q.peek() << endl;
    cout << "Queue Size: " << q.size() << endl;

    q.dequeue();
    q.dequeue();

    cout << endl;

    cout << "Queue Front: " << q.peek() << endl;
    cout << "Queue Size: " << q.size() << endl;
    cout << "Queue Empty (1=true, 0=false): " << q.isEmpty() << endl;

    return 0;
}
