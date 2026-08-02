#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node* next;
    int val;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void printList(Nodehead)
{
    Node temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp -> next;
    }
}
void listInsert(Node&head , int pos, int val)
{
    if(pos==0)
    {
        Node prev_next = head;
        head = new Node (val);
        head->next = prev_next;
        return;
    }
    pos--;
    Nodetemp = head;
    for(int i=0; i<pos; i++)
    {
        temp=temp->next;

    }
    Node save_next = temp->next;
    Nodeins = new Node(val);
    temp-> next = ins;
    ins->next = save_next;
}
void listDelete(Node &head, int pos)
{
    if(pos==0)
    {
        head = head->next;
        return ;
    }
    pos --;
    Nodetemp = head;
    for(int i= 0; i<pos; i++)
    {
        temp = temp -> next;
    }
    Node c = temp-> next->next;
    delete temp ->next;
    temp->next=c;
}
int main()
{
    Nodehead = new Node(5);
    Node a = new Node(10);
    Nodeb = new Node(20);
    Node *c = new Node(30);
    head->next = a;
    a->next = b;
    b->next = c;
    //listInsert(head,2,100);
    //listInsert(head,0,69);
    //listInsert(head,3,200);
    listDelete(head,1);
    printList(head);

    return 0;
}
