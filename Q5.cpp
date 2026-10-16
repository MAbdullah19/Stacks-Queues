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

void dequeue() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Removed: " << items[front] << endl;
    if (front == rear)
        front = rear = -1;
    else
        front++;
}

void peekFront() {
    if (front == -1)
        cout << "Queue is empty\n";
    else
        cout << "Front: " << items[front] << endl;
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
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    peekFront();
    display();

    dequeue();
    dequeue();
    dequeue();

    enqueue(40);
    display();
    return 0;
}
