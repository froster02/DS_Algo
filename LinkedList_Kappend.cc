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

void insertAtTail(node *& head, int data) {
    if (head == NULL) {
        head = new node(data);
        return;
    }
    node * tail = head;
    while (tail -> next != NULL) {
        tail = tail -> next;
    }
    tail -> next = new node(data);
    return;
}

void print(node * head) {
    while (head != NULL) {
        cout << head -> data << "->";
        head = head -> next;
    }
    cout << endl;
}

int length(node * head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head -> next;
    }
    return count;
}

void rotateK(node *& head, int k) {

    node *p = head;
    node *th = head;

    while(k--) {
        p = p-> next;
        c++;
    }
    node * temp = p;
    p = temp-> next;
    head = p;
    temp -> next = NULL;

    while(p->next != NULL) {
        p = p -> next;
    }
    p-> next = th;
}

int main() {
    node * head = NULL;
    int choice;
    char ch;
    int key;
    do {
        cout << "MENU :- \n1.Push \n2.Rotate \n3.Print\n4.Length\n";
        cout << "\nEnter choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> key;
                insertAtTail(head, key);
                break;
            case 2:
                cin >> key;
                rotateK(head, key);
                break;
            case 3:
                print(head);
                break;
            case 4:
                cout << length(head);
                break;

            default:
                cout << "\ninvalid input !\n";
                break;
        }
        cout << "\nContinue : (1/0)";
        cin >> ch;
    } while (ch == '1');
    cout << "\nexiting...\n";
    return 0;
}