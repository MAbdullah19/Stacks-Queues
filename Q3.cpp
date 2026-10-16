// Muhammad Abdullah | 553410 | BSCS-15D
#include <iostream>
#include <string>
using namespace std;

char items[20];
int top = -1;

void push(char value) {
    if (top == 19) {
        cout << "Stack is full\n";
        return;
    }
    items[++top] = value;
}

char pop() {
    if (top == -1)
        return '\0';
    return items[top--];
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (word.length() > 20) {
        cout << "Word must have at most 20 characters\n";
        return 0;
    }

    for (char ch : word)
        push(ch);

    cout << "Reversed: ";
    while (top != -1)
        cout << pop();
    cout << endl;

    push('A');
    cout << "One-letter test: " << pop() << endl;
    return 0;
}
