/* ?: insert a node to its correct sorted position in a sorted
linked list.first ,create a linked list with some sorted data,
then ask for any one data to be inserted to its correct position.
*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
        Node(int val)
        {
        data = val;
        next = nullptr;
        }
};
void insertSorted(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head || val <= head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->data < val) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertSorted(head, 2);
    insertSorted(head, 4);
    insertSorted(head, 6);

    cout << "Sorted List: ";
    printList(head);

    int valueToInsert;
    cout << "Enter a value to insert into the sorted list: ";
    cin >> valueToInsert;

    insertSorted(head, valueToInsert);

    cout << "Updated Sorted List: ";
    printList(head);

    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

