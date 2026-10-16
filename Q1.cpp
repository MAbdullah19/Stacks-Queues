// Muhammad Abdullah | 553410 | BSCS-15D
#include <iostream>
using namespace std;

int items[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        cout << "Stack is full\n";
        return;
    }
    items[++top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Removed: " << items[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << items[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << items[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();

    push(40);
    push(50);
    push(60);
    display();
    push(70);

    while (top != -1)
        pop();
    pop();
    peek();
    return 0;
}
