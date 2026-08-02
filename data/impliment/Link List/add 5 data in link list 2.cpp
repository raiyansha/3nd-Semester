#include<iostream>
#include<conio.h>
using namespace std;
typedef struct node Node;

struct node{
int data ;
Node *next;
};
Node *head;
Node *createNode(int item)
{
    Node* newNode = new Node;
    newNode->data=item;
    newNode->next=NULL;
    return newNode;
};
int main() {
    Node* head = createNode(2234);

    // Create the remaining nodes and link them together
    Node* second = createNode(22);
    head->next = second;

    Node* third = createNode(33);
    second->next = third;

    Node* fourth = createNode(44);
    third->next = fourth;

    Node* fifth = createNode(55);
    fourth->next = fifth;

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    getch();
    return 0;
}
