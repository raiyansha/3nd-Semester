#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtFirst(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtMiddle(int value) {
        if (head == nullptr) {
            insertAtFirst(value);
            return;
        }

        Node* slowPtr = head;
        Node* fastPtr = head;

        while (fastPtr->next != nullptr && fastPtr->next->next != nullptr) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }

        Node* newNode = new Node(value);
        newNode->next = slowPtr->next;
        slowPtr->next = newNode;
    }

    void insertAtLast(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    void deleteFromFirst() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deleteFromMiddle() {
        if (head == nullptr || head->next == nullptr) {
            deleteFromFirst();
            return;
        }

        Node* slowPtr = head;
        Node* fastPtr = head;
        Node* prev = nullptr;

        while (fastPtr->next != nullptr && fastPtr->next->next != nullptr) {
            fastPtr = fastPtr->next->next;
            prev = slowPtr;
            slowPtr = slowPtr->next;
        }

        prev->next = slowPtr->next;
        delete slowPtr;
    }

    void deleteFromLast() {
        if (head == nullptr) {
            return;
        }

        if (head->next == nullptr) {
            deleteFromFirst();
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        while (current->next != nullptr) {
            prev = current;
            current = current->next;
        }

        prev->next = nullptr;
        delete current;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtFirst(1);
    list.insertAtLast(3);
    list.insertAtMiddle(2);

    list.display();

    list.deleteFromFirst();
    list.display();

    list.deleteFromMiddle();
    list.display();

    list.deleteFromLast();
    list.display();

    return 0;
}
