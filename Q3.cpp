// Name: Muhammad Kaleem Sajjad
// Registration Number: 544147
// Section: BSCS-15E
// Lab 06 - Task 3: Reversing a Word using a Stack

#include<iostream>
using namespace std;

const int SIZE=20;
// max characters allowed
char stack[SIZE];
// char array used as stack
int top = -1;
// top = -1 means stack is empty

// pushes a character onto the stack
void push(char ch){
    if (top==SIZE - 1){
        cout << "Stack is full." << endl;
    }
    else{
        top++;
        stack[top]=ch;
    }
}

// removes and returns the top character
char pop(){
    if(top == -1){
        return '\0';
    }
    else{
        char ch = stack[top];
        top--;
        return ch;
    }
}

int main(){
    char word[21];
    // one extra for null terminator

    cout << "Enter a word (max 20 characters): ";
    cin >> word;

    // calculate length manually
    int len = 0;
    while(word[len] != '\0'){
        len++;
    }

    // check if word fits in the stack
    if (len > SIZE){
        cout << "Word is too long." << endl;
        return 1;
    }

    // push each character onto the stack
    for (int i = 0; i < len; i++){
        push(word[i]);
    }

    // pop characters one by one to print in reverse order
    cout << "Reversed word: ";
    while(top != -1){
        cout << pop();
    }
    cout<<endl;

    return 0;
}
