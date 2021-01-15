#include <iostream>
#include <ctime>
using namespace std;

class node {
    public:
        int data;
    node *next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

/*  passing a pointer variable by Reference so that head value refelect in main also
    since by doing this *&head we have access of the actual head all the time */
void insertAtHead(node *&head, int d) {
    if (head == NULL) {
        head = new node(d);
        return;
    }

    node *newnode = new node(d);
    newnode -> next = head;
    head = newnode;

}
//  head passing by value
void print(node *head) {
    while (head != NULL) {
        cout << head -> data << "->";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    time_t s = clock();

    node *head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    print(head);
    print(head);

    time_t e = clock();
    cout << "\ntime taken : " << e - s << " ms" << endl;
    return 0;
}