// Muhammad Abdullah | 553410 | BSCS-15D
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return;
    }
    Node* temp = top;
    cout << "Removed: " << temp->data << endl;
    top = top->next;
    delete temp;
}

void peek() {
    if (top == nullptr)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << top->data << endl;
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return;
    }
    Node* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    push(5);
    push(15);
    push(25);
    display();
    pop();
    peek();

    pop();
    pop();
    pop();

    push(35);
    push(45);
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    return 0;
}
