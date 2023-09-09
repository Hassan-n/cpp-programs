//simple C++ program that simulates a queue for managing customers in a virtual environment.

#include <iostream>
#include <cstring>

using namespace std;

struct Node {
    char *data;
    Node *next;
};

class List {
private:
    Node *head, *tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    // Function to add elements
    void add(char *n) {
        Node *tmp = new Node;
        tmp->data = n;
        tmp->next = NULL;
        if (head == NULL) {
            head = tmp;
            tail = tmp;
        } else {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    // Display all the elements
    void display() {
        Node *tmp = head;
        while (tmp != NULL) {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }

    // Function to call a customer
    void callCustomer() {
        if (head == NULL) {
            cout << "No Customers" << endl;
        } else {
            cout << "Calling Customer " << head->data << endl;
            head = head->next;
        }
    }
};

int main() {
    List l;
    int choice;
    char name[100];

    do {
        cout << "\n******** Welcome to Virtual line system ************\n" << endl;
        cout << "1. Call a customer" << endl;
        cout << "2. Add a customer" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                l.callCustomer();
                break;
            case 2:
                cout << "Enter customer name: ";
                cin >> name;
                l.add(name);
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 3);

    return 0;
}
