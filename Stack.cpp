#include <iostream>
using namespace std;

#define MAX_SIZE 101

class Stack {
private:
    int A[MAX_SIZE];
    int top;
public:
    Stack() {
        top = -1;
    }

    void Push(int x) {
        if (top == MAX_SIZE - 1) {
            cout << "Error: stack overflow\n";
            return;
        }
        A[++top] = x;
    }

    void Pop() {
        if (top == -1) {
            cout << "Error: No element to pop\n";
            return;
        }
        top--;
    }

    int Top() {
        return A[top];
    }

    int IsEmpty() {
        if (top == -1) return 1;
        return 0;
    }

    void Print() {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
            cout << A[i] << " ";
        cout << "\n";
    }
};

int main() {
    Stack S;
    S.Push(2); S.Print();
    S.Push(5); S.Print();
    S.Push(10); S.Print();
    S.Pop(); S.Print();
    S.Push(12); S.Print();
}