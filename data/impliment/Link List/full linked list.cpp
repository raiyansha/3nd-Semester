#include <iostream>
#include <cstdlib>
using namespace std;

// Define a Node class to represent individual elements in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Define a LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert data at the beginning of the linked list
    void insertAtFirst(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert data at the middle of the linked list
    void insertAtMiddle(int value) {
        if (head == nullptr) {
            insertAtFirst(value);
            return;
        }

        Node* slowPtr = head;
        Node* fastPtr = head;

        // Move fastPtr by two steps and slowPtr by one step
        while (fastPtr->next != nullptr && fastPtr->next->next != nullptr) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }

        Node* newNode = new Node(value);
        newNode->next = slowPtr->next;
        slowPtr->next = newNode;
    }

    // Function to insert data at the end of the linked list
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

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << "   ";
            current = current->next;
        }
        cout<<endl;
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
};

int main() {
    LinkedList list;
    int triger,exit;
    int first,middle,last;

    cout<<"If you add data in 'FIRST'- THEN PRESS    -->'1' "<<endl;
    cout<<"If you add data in 'LAST'- THEN PRESS     -->'2' "<<endl;
    cout<<"If you add data in 'MIDDLE'- THEN PRESS   -->'3' "<<endl;
    cout<<"If you 'display' data - THEN PRESS        -->'4' "<<endl;
    cout<<"If you delete data in 'FIRST'- THEN PRESS -->'5' "<<endl;
    cout<<"If you delete data in 'LAST'- THEN PRESS  -->'6' "<<endl;
    cout<<"If you delete data in 'MIDDLE'- THEN PRESS-->'7' "<<endl;
    cout<<"If you 'exit'- THEN PRESS                 -->'8' "<<endl<<endl;

    do{
    cout<< "enter your choose number: ";
    cin>>triger;

    if(triger==1){
        cout<< "enter your value:";
        cin>>first;
        list.insertAtFirst(first);
    }
    else if(triger==2){
        cout<< "enter your value:";
        cin>>last;
        list.insertAtLast(last);
    }

    else if(triger==3){
        cout<< "enter your value:";
        cin>>middle;
        list.insertAtMiddle(middle);
    }

    // Display the linked list
    else if (triger==4)
    list.display();

    else if(triger==5){
    list.deleteFromFirst();
    list.display();
    }
    else if(triger==6){
    list.deleteFromLast();
    list.display();
    }
    else if(triger==7){
    list.deleteFromMiddle();
    list.display();
    }
    else {
        cout<< "404   please try again "<<endl;
        break;
    }
    }while(triger!=8);
    return 0;
}

