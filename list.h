class Node{
    public :
        int data;
        Node *next = nullptr;
        Node *prev = nullptr;
};

class LinkedList{
    public :
        Node *head = nullptr;
        Node *tail = nullptr;

        void Append(int data);
        void Prepend(int data);
        int Length();
        void Print();
        void PrintReverse();
};