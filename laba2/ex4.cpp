#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Создание 10 узлов и связываем 
    for (int i = 1; i <= 10; ++i) {
        Node* newNode = new Node(i);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Вывод в прямом порядке
    cout << "Список от начала к концу:: ";
    for (Node* cur = head; cur != nullptr; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;

    // Вывод в обратном порядке
    cout << "Список от конца к началу: ";
    for (Node* cur = tail; cur != nullptr; cur = cur->prev)
        cout << cur->data << " ";
    cout << endl;

    // Освобождение памяти
    Node* cur = head;
    while (cur != nullptr) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}