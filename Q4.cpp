// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 4: Inserting Values into a Queue

#include <iostream>
using namespace std;

const int SIZE = 5;
// maximum queue capacity
int items[SIZE];
int front = -1;
// front = -1 means queue is empty
int rear = -1;

// inserts a value at the rear of the queue
void enqueue(int value){
    if(rear==SIZE-1){
        // linear queue: once rear reaches the end, no more insertions
        cout << "Queue is full. Cannot insert " << value << endl;
    }
    else{
        if(front == -1 &&rear == -1){
            // first element: set both indices to 0
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

    display();
    // expected: 10 20 30

    // fill up remaining spots
    enqueue(40);
    enqueue(50);

    // try inserting into a full queue
    enqueue(60);
    // should print full message

    // test display on empty queue
    int saveFront = front, saveRear = rear;
    front = -1;
    rear = -1;
    display();
    // should print empty message
    front = saveFront;
    rear = saveRear;

    return 0;
}
