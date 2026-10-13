// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 1: Implementing a Stack using an Array

#include<iostream>
using namespace std;

const int SIZE=5;  // maximum stack capacity
int items[SIZE];     // array to hold stack elements
int top=-1;        // top = -1 means stack is empty

// adds a value to the top of the stack
void push(int value){
    if (top==SIZE - 1){
        cout<<"Stack is full. so cannot insert "<<value<<endl;
    }
    else{
        top++;
        items[top]=value;
        cout<<value<< " pushed to stack." << endl;
    }
}

// removes the top value and prints it
void pop(){
    if (top == -1){
        cout << "Stack is empty. Cannot pop." << endl;
    }
    else{
        cout << "Popped: " << items[top] << endl;
        top--;
    }
}

// shows the top value without removing it
void peek(){
    if (top == -1){
        cout << "Stack is empty. Nothing to peek"<<endl;
    }
    else{
        cout<<"Top element: " <<items[top]<< endl;
    }
}

// displays all elements from top to bottom
void display(){
    if (top == -1) {
        cout<<"Stack is empty "<< endl;
    }
    else{
        cout<<"Stack (top to bottom): ";
        for (int i = top; i >= 0; i--){
            cout << items[i];
            if (i != 0){
            cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    // push three values onto the stack
    push(10);
    push(20);
    push(30);

    display();
    // expected: 30 20 10

    pop();
    // removes 30
    peek();
    // shows 20

    // fill the remaining spots
    push(40);
    push(50);
    push(60);

    // try inserting into a full stack
    push(70);
    // should print full message

    // pop all elements one by one
    pop();
    pop();
    pop();
    pop();
    pop();

    // try popping from empty stack
    pop();
    // should print empty message

    return 0;
}
