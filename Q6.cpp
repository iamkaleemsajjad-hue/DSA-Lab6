// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 6: Customer Service Queue (Menu-Driven)

#include <iostream>
using namespace std;

const int SIZE = 5;
// max 5 customers in queue at a time
int items[SIZE];
int front = -1;
int rear = -1;

// adds a customer token at the rear of the queue
void enqueue(int token) {
    if (rear == SIZE - 1) {
        // insertion blocked when rear reaches end (linear queue limitation)
        cout << "Queue is full. Cannot add customer." << endl;
    }
    else{
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        items[rear] = token;
        cout << "Customer " << token << " added to queue." << endl;
    }
}

// serves (removes) the customer at the front
// resets queue to empty state when last customer is served
void dequeue() {
    if (front == -1){
        cout << "No customers in queue." << endl;
    }
    else if (front == rear) {
        cout << "Serving customer: " << items[front] << endl;
        front = -1;
        rear = -1;
    }
    else{
        cout << "Serving customer: " << items[front] << endl;
        front++;
    }
}

// shows the next customer to be served without removing
void peekFront(){
    if (front == -1){
        cout << "No customers in queue." << endl;
    }
    else{
        cout << "Next customer to serve: " << items[front] << endl;
    }
}

// displays all customers currently in the queue
void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Customers in queue (front to rear): ";
        for (int i = front; i <= rear; i++) {
            cout << items[i];
            if (i != rear) cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int choice;
    int tokenCounter = 1;  // auto-increments for each new customer

    cout << "=== Customer Service Queue ===" << endl;

    do {
        // print menu options
        cout << "\n1. Add customer" << endl;
        cout << "2. Serve next" << endl;
        cout << "3. View next" << endl;
        cout << "4. Display queue" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            enqueue(tokenCounter);
            tokenCounter++;
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            peekFront();
        } else if (choice == 4) {
            display();
        } else if (choice == 5) {
            cout << "Exiting. Goodbye!" << endl;
        } else {
            cout << "Invalid choice. Please enter 1-5." << endl;
        }

    } while (choice != 5);

    return 0;
}
