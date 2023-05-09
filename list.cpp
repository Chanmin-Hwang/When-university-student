#include "list.h"
#include <iostream>
using namespace std;

void LinkedList :: Append(int data){
    Node *newNode = new Node;

    newNode->data = data;

    if (head == nullptr){
        head = newNode;
        tail = newNode;
    }

    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void LinkedList :: Prepend(int data){
    Node *newNode = new Node;

    newNode->data = data;

    if (head == nullptr){
        head = newNode;
        tail = newNode;
    }

    else{
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

int LinkedList :: Length(){
    Node *current = head;
    int cnt = 0;

    while(current != nullptr){
        cnt++;
        current = current->next;
    }

    return cnt;
}

void LinkedList :: Print(){
    Node *current = head;
    while (current != nullptr){
        cout << current->data << ' ';
        current = current->next;
    }
    cout << '\n';
}

void LinkedList :: PrintReverse(){
    Node *current = tail;
    while (current != nullptr){
        cout << current->data << ' ';
        current = current->prev;
    }
    cout << '\n';
}