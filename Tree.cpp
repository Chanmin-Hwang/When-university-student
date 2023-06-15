/*
전위순회 코드

#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T> *left, *right;
    Node(T data) : data(data), left(NULL), right(NULL) {} // 생성자
};

template <class T>
class BinaryTree {
public:
    Node<T> *root;
    BinaryTree() : root(NULL) {}

    void preOrder(Node<T> *node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
};

int main() {
    BinaryTree<int> tree;
    tree.root = new Node<int>(1);
    tree.root->left = new Node<int>(2);
    tree.root->right = new Node<int>(3);
    tree.root->left->left = new Node<int>(4);
    tree.root->left->right = new Node<int>(5);

    tree.preOrder(tree.root);
    cout << endl;

    return 0;
}

결과: 1 2 4 5 3


*/

/*
중위순회 코드

#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T> *left, *right;
    Node(T data) : data(data), left(NULL), right(NULL) {}
};

template <class T>
class BinaryTree {
public:
    Node<T> *root;
    BinaryTree() : root(NULL) {}

    void inOrder(Node<T> *node) {
        if (node == NULL) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
};

int main() {
    BinaryTree<int> tree;
    tree.root = new Node<int>(1);
    tree.root->left = new Node<int>(2);
    tree.root->right = new Node<int>(3);
    tree.root->left->left = new Node<int>(4);
    tree.root->left->right = new Node<int>(5);

    tree.inOrder(tree.root);
    cout << endl;

    return 0;
}

*/

/*

후위순회 코드

#include <iostream>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T> *left, *right;
    Node(T data) : data(data), left(NULL), right(NULL) {}
};

template <class T>
class BinaryTree {
public:
    Node<T> *root;
    BinaryTree() : root(NULL) {}

    void postOrder(Node<T> *node) {
        if (node == NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BinaryTree<int> tree;
    tree.root = new Node<int>(1);
    tree.root->left = new Node<int>(2);
    tree.root->right = new Node<int>(3);
    tree.root->left->left = new Node<int>(4);
    tree.root->left->right = new Node<int>(5);

    tree.postOrder(tree.root);
    cout << endl;

    return 0;
}

4 5 2 3 1

*/

/*

        A
       / \
      B   C
     / \ / \
    D  E F  G
   /|\/|\/|\ \
  H I J K L M N O
위의 이진 트리에서 전위 순회를 수행하면 다음과 같은 결과가 출력됩니다.

A B D H I E J K C F L M G N O


        A
       / \
      B   C
     / \ / \
    D  E F  G
   /|\/|\/|\ \
  H I J K L M N O
위의 이진 트리에서 중위 순회를 수행하면 다음과 같은 결과가 출력됩니다.

H D I B J E K A L F M C N G O



        A
       / \
      B   C
     / \ / \
    D  E F  G
   /|\/|\/|\ \
  H I J K L M N O
위의 이진 트리에서 후위 순회를 수행하면 다음과 같은 결과가 출력됩니다.

H I D J K E B L M F N O G C A

*/

/*

template <class T> class MaxPQ{ 
    public: virtual ~MaxPQ(){} // 가상 파괴자 
            virtual bool IsEmpty() const = 0; // 우선순위 큐가 공백이면 true를 반환 
            virtual const T& Top() const = 0; // 최대 원소에 대한 참조를 반환 
            virtual void Push(const T&) = 0; // 우선순위 큐에 원소를 삽입 
            virtual void Pop() = 0; // 최대 우선순위를 가진 원소를 삭제 
}; 

다음은 MaxPQ 클래스를 상속받아 MaxHeap 클래스를 구현한 예제입니다:

template <class T>
class MaxHeap : public MaxPQ<T> {
private:
    T* heap; // 원소의 배열
    int heapSize; // 힙의 크기
    int capacity; // 배열의 크기
public:
    MaxHeap(int theCapacity = 10);
    ~MaxHeap() {delete [] heap;}
    bool IsEmpty() const {return heapSize == 0;}
    const T& Top() const;
    void Push(const T&);
    void Pop();
};

template <class T>
MaxHeap<T>::MaxHeap(int theCapacity) {
    if (theCapacity < 1) throw "Capacity must be >= 1.";
    capacity = theCapacity;
    heapSize = 0;
    heap = new T[capacity + 1]; // heap[0]은 사용하지 않음
}

template <class T>
const T& MaxHeap<T>::Top() const {
    if (IsEmpty()) throw "Heap is empty. Cannot delete.";
    return heap[1];
}

template <class T>
void MaxHeap<T>::Push(const T& e) {
    if (heapSize == capacity) {
        ChangeSize1D(heap, capacity, 2 * capacity);
        capacity *=2;
    }
    int currentNode = ++heapSize;
    while (currentNode != 1 && heap[currentNode / 2] < e) {
        heap[currentNode] = heap[currentNode/2];
        currentNode /= 2;
    }
    heap[currentNode] = e;
}

template <class T>
void MaxHeap<T>::Pop() {
    if (IsEmpty()) throw "Heap is empty. Cannot delete.";
    heap[1].~T();
    T lastE = heap[heapSize--];
    int currentNode = 1;
    int child = 2;
    while (child <= heapSize) {
        if (child < heapSize && heap[child] < heap[child+1]) child++;
        if (lastE >= heap[child]) break;
        heap[currentNode] = heap[child];
        currentNode = child; child *= 2;
    }
    heap[currentNode] = lastE;
}
이 코드는 MaxPQ 클래스를 상속받아 MaxHeap 클래스를 정의하고 있습니다. 
이 클래스는 최대 힙을 나타내며, MaxPQ 클래스의 순수 가상 함수들을 구현하고 있습니다. 
IsEmpty 메소드는 힙이 비어있는지 여부를 반환하고, Top 메소드는 최대 원소에 대한 참조를 반환합니다. 
Push와 Pop 메소드는 각각 힙에 원소를 삽입하고, 최대 원소를 삭제하는 역할을 합니다. 
이 클래스의 생성자와 소멸자는 힙의 초기화와 삭제를 담당합니다.

*/