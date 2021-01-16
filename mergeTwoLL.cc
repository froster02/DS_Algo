#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node (int d){
        data = d;
        next = NULL;
    }
};

void createLL_A(node *&A, int val1){
    if(A == NULL) {
        A = new node(val1);
        return;
    }
    node *temp = new node(val1);
    temp->next = A;
    A = temp;
}

void createLL_B(node *&B, int val2) {
    if(B == NULL) {
        B = new node(val2);
        return;
    }
    node *newnode = new node(val2);
    newnode->next = B;
    B = newnode;
}

void print(node *head){
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

node* merge(node *A, node *B){
    //base case
    if(A == NULL)
        return B;
    if(B == NULL)
        return A;
    
    //take a head pointer
    node *C;

    if((A->data) < (B->data)) {
        C = A;
        C->next = merge(A->next, B);
    } else {
        C = B;
        C->next = merge(A, B->next);
    }
    return C;
}

int main(){

    cout << endl;
    node *A = NULL;
    node *B = NULL;

    createLL_A(A,1);
    createLL_A(A,3);
    createLL_A(A,4);
    createLL_A(A,7);

    cout << "A : ";
    print(A);
    cout << endl;

    createLL_B(B,0);
    createLL_B(B,2);
    createLL_B(B,8);
    createLL_B(B,10);

    cout << "B : ";
    print(B);
    cout << endl << endl;

    cout << "C : ";
    node *C = merge(A, B);
    print(C);
    cout << endl << endl;

    return 0;
}