#include <iostream>
using namespace std;
typedef struct node Node;//struct node er shob kichu "Node" er moddhe cole ashche

struct node{     //struct node hocche ekta data type jar moddhe vinno viddo type er data rakha jay
int data ;
Node *next;      //"struct node" type er ekta pointer hocche " *next "
};
Node *create_node(int item,Node *next)//Node* pointer type er ekta function hocche "create_node"
{               //er majhe data,*next cole ashche
    Node *new_node=(Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {
        cout<< "ERROR"<< endl;
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
};

int main() {
    Node *n;    //node er ekta variable hocche "n"
    n=create_node(10,NULL);//create node hocche "struct node" structure er ekta variable hocche create_node pointer
    cout<<"data="<<n->data<< endl;
    return 0;
}

