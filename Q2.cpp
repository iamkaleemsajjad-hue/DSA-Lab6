// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 2: Implementing a Stack using a Linked List

#include<iostream>
using namespace std;

// each node stores one integer and a pointer to the next node
struct Node{
    int data;
    Node* next;
};

Node* top=nullptr;
// top = nullptr means stack is empty

// inserts a new node at the head (top of stack)
void push(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout<<value<<" pushed to stack"<<endl;
}

// removes the head node and prints its value
void pop(){
    if (top == nullptr){
        cout << "Stack is empty, so it Cannot pop"<<endl;
    }
    else{
        Node* temp = top;
        cout << "Popped: " << temp->data<<endl;
        top = top->next;
        delete temp;
        // free the removed node
    }
}

// shows the value at the head without removing it
void peek(){
    if(top == nullptr){
        cout << "Stack is empty, so Nothing to peek"<<endl;
    }
    else{
        cout << "Top element: " << top->data << endl;
    }
}

// traverses from head to end and prints each node
void display(){
    if(top==nullptr){
        cout << "Stack is empty" << endl;
    }
    else{
        cout<<"Stack (top to bottom): ";
        Node* current = top;
        while(current != nullptr){
            cout << current->data;
            if (current->next != nullptr) cout << " ";
            current = current->next;
        }
        cout << endl;
    }
}

// releases all remaining nodes before the program ends
void freeAll(){
    while (top != nullptr){
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

int main(){
    // push three values
    push(5);
    push(15);
    push(25);

    display();
    // expected: 25 15 5

    pop();
    // removes 25
    peek();
    // shows 15

    // pop remaining elements
    pop();
    pop();

    // test pop on empty stack
    pop();
    // should print empty message

    // free any remaining memory before exit
    freeAll();

    return 0;
}
