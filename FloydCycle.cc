#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node(int d) {
        data = d;
        next = NULL;
    };
};

void push(node *&head, int data){
    if(head == NULL) {
        head = new node(data);
        return;
    }

    node *temp = new node(data);
    temp->next = head;
    head = temp;
    return;
}

void print(node *head){
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
    return;
}

void removeLoop(node slow, node *head) {
    node *p1 = head;
    node *p2 = slow;

    while(p2->next != slow || p2->next == head){
        p1 = p1->next;
        p2 = p2->next;
        if(p2->next == p1)
            break;
    }
    p2->next = NULL;
}

bool deleteCycle(node *&data){
    node *fast = head;
    node *slow = head;
    
    while (fast != NULL && fast->next != NULL) {
        fast = (fast->next)->next;
        slow = slow->next;

        if(fast == slow){
            removeLoop(slow, head);
            return true;
        }
    }
    return false;
}

int main(){

    cout << endl;
    node *head = push(50);
    head->next = push(20);
    head->next->next = push(15);
    head->next->next->next = push(4);
    head->next->next->next->next = push(10);

    head->next->next->next->next->next = head->next->next;
    
    print(head);

    deleteCycle(head);

    cout << endl <<endl;
    return 0;
}