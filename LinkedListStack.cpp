#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int data);
    int pop();
    void display();
};

void Stack::push(int data) {
    Node* temp = new Node;
    if (!temp) {
        cout << "\nHeap Overflow";
        exit(1);
    }
    temp->data = data;
    temp->next = top;
    top = temp;
}

int Stack::pop() {
    Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else {
        temp = top;
        top = top->next;
        temp->next = NULL;
        int popped_value = temp->data;
        delete temp;
        return popped_value;
    }
}

void Stack::display() {
    Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow";
        exit(1);
    }
    else {
        temp = top;
        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
    }
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    cout << "\nTop element is " << s.pop() << endl;

    s.display();

    return 0;
}