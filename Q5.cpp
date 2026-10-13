// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 5: Removing Values from a Queue

#include<iostream>
using namespace std;

const int SIZE=5;
int items[SIZE];
int front = -1;
int rear = -1;

// inserts a value at the rear
void enqueue(int value){
    if (rear == SIZE - 1){
        cout << "Queue is full,so cannot insert " << value << endl;
    } else {
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        }
        else{
            rear++;
        }
        items[rear] = value;
        cout << value << " inserted into queue." << endl;
    }
}

// removes the front element and prints it
// resets both indices to -1 when the last item is removed
void dequeue(){
    if(front == -1){
        cout << "Queue is empty, so cannot remove." << endl;
    }
    else if(front == rear){
        // removing the last element, reset the queue
        cout << "Removed: " << items[front] << endl;
        front = -1;
        rear = -1;
    }
    else{
        cout << "Removed: " << items[front] << endl;
        front++;  // move front forward
    }
}

// shows the front element without removing it
void peekFront(){
    if (front == -1){
        cout << "Queue is empty, so nothing to peek." << endl;
    }
    else{
        cout << "Front element: " << items[front] << endl;
    }
}

// prints all elements from front to rear
void display(){
    if (front == -1){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Queue (front to rear): ";
        for (int i = front; i <= rear; i++){
            cout << items[i];
            if (i != rear) cout << " ";
        }
        cout << endl;
    }
}

int main(){
    // insert 10, 20, 30
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    // removes 10

    peekFront();
    // shows 20
    display();
    // expected: 20 30

    // remove all remaining elements
    dequeue();
    dequeue();

    // try removing from empty queue
    dequeue();
    // should print empty message

    // insert 40 to verify queue resets and works correctly
    enqueue(40);
    display();
    // expected: 40

    return 0;
}
