// Muhammad Abdullah | 553410 | BSCS-15D
#include <iostream>
using namespace std;

int items[5];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == 4) {
        cout << "Queue is full. Cannot add customer.\n";
        return;
    }
    if (front == -1)
        front = 0;
    items[++rear] = value;
    cout << "Customer added\n";
}

void dequeue() {
    if (front == -1) {
        cout << "No customers waiting\n";
        return;
    }
    cout << "Serving token: " << items[front] << endl;
    if (front == rear)
        front = rear = -1;
    else
        front++;
}

void peekFront() {
    if (front == -1)
        cout << "No customers waiting\n";
    else
        cout << "Next token: " << items[front] << endl;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Waiting tokens: ";
    for (int i = front; i <= rear; i++)
        cout << items[i] << " ";
    cout << endl;
}

int main() {
    int choice, token;
    do {
        cout << "\n1. Add customer\n";
        cout << "2. Serve next\n";
        cout << "3. View next\n";
        cout << "4. Display queue\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (rear == 4) {
                    cout << "Queue is full. Cannot add customer.\n";
                } else {
                    cout << "Enter token number: ";
                    cin >> token;
                    enqueue(token);
                }
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peekFront();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);
    return 0;
}
