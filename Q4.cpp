// Muhammad Abdullah | 553410 | BSCS-15D
#include <iostream>
using namespace std;

int items[5];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == 4) {
        cout << "Queue is full\n";
        return;
    }
    if (front == -1)
        front = 0;
    items[++rear] = value;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << items[i] << " ";
    cout << endl;
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    enqueue(40);
    enqueue(50);
    display();
    enqueue(60);
    return 0;
}
