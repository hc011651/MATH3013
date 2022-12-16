#include <iostream>
using namespace std;

const int SIZE = 10;
template <class T> class MyGenericStack {
    T stack[SIZE];
    int tos;

public:
    MyGenericStack() {
        tos = 0;
    }
    void push(T ob) {
        if (tos == SIZE) {
            throw std::invalid_argument("push: Stack is full.");
            return;
        }
        stack[tos] = ob;
        tos++;
    }

    void pop() {
        if (tos == 0) {
            throw std::invalid_argument("pop: Stack is empty.");
            return;
        }
        tos--;
    }

    T top() {
        if (tos == 0) {
            throw std::invalid_argument("top: Stack is empty.");
        }
        return stack[tos - 1];
    }

    void clear() {
        tos = 0;
    }

    int size() {
        return tos;
    }

    bool isFull() {
        return tos == SIZE;
    }

    bool isEmpty() {
        return tos == 0;
    }
};

int main() {
    MyGenericStack<char> tStack;
    //Test clear(), size(), isFull(), isEmpty()
    cout << "tStack isFull: " << tStack.isFull() << endl;
    cout << "tStack isEmpty: " << tStack.isEmpty() << endl;
    tStack.push('a');
    cout << "size of tStack after push: " << tStack.size() << endl;
    cout << "tStack isFull: " << tStack.isFull() << endl;
    cout << "tStack isEmpty: " << tStack.isEmpty() << endl;
    tStack.clear();
    cout << "size of tStack after clear: " << tStack.size() << endl;
    cout << "tStack isFull: " << tStack.isFull() << endl;
    cout << "tStack isEmpty: " << tStack.isEmpty() << endl;


    //Test push(), top()
    for (int i = 0; i < SIZE; i++) {
        tStack.push(i + 'a');
        cout << "[Test Size] size of tStack: " << tStack.size() << endl;
        cout << "[Test Push] Top tStack: " << tStack.top() << endl;
    }
    cout << "tStack isFull: " << tStack.isFull() << endl;
    cout << "tStack isEmpty: " << tStack.isEmpty() << endl;

    //Test pop()
    for (int i = 0; i < SIZE; i++) {
        cout << "[Test Pop] Top tStack: " << tStack.top() << endl;
        cout << "[Test Size] size of tStack: " << tStack.size() << endl;
        tStack.pop();
    }
    cout << "tStack isFull: " << tStack.isFull() << endl;
    cout << "tStack isEmpty: " << tStack.isEmpty() << endl;

    system("pause");
    return 0;
}