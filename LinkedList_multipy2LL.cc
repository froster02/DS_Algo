#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    };
};

void insertAtHead(node *&head, int data){
    
}

int main(){

    node *head = NULL;
    insertAtHead(head, 9);
    insertAtHead(head, 4);
    insertAtHead(head, 6);

    return 0;
}