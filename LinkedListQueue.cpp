#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() : front(nullptr), rear(nullptr) {}
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    int dequeue() {
        if (front == nullptr) {
            std::cerr << "Queue is empty!" << std::endl;
            exit(EXIT_FAILURE);
        }
        int data = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        return data;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    std::cout << q.dequeue() << std::endl; // 1
    std::cout << q.dequeue() << std::endl; // 2
    return 0;
}