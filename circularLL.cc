#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

void insert(node *&head, int data) {
    node *n = new node(data);
    node *t = head;

    n->next = head;

    if(t != NULL){
        while(t->next != head){
            t = t->next;
        }
        t->next = n;
    } else {
        n->next = n;
    }
    head = n;
}

void print(node *head) {
    node *temp = head;
    while(temp->next != head){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

node* getNode(node *head, int data){
    node *temp = head;
    //for all nodes except last node 
    while(temp->next != head){
        if(temp->data == data) {
            return temp;
        }
        temp = temp->next;
    }
    //check last node
    if(temp->data == data)
        return temp;
    
    return NULL;
}

void deleteNode(node *&head, int data){
    node *del = getNode(head, data);
    if(del == NULL)
        return;
    if(head == del)
        head = head->next;

    node *temp = head;

    //stop one step behind the node to be deleted
    while(temp->next != del){
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

int main() {

    node* head = NULL;

    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);

    print(head);

    deleteNode(head, 3);
    print(head);

    deleteNode(head, 1);
    print(head);

    return 0;
}
