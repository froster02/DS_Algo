#include <iostream>

using namespace std;
struct node {
    int data;
    node *next;
};

node *newnode(int key) {
    node * temp = new node();
    temp -> data = key;
    temp -> next = NULL;
    return temp;
}

void IAB(node **head, int key) {
    node * temp = newnode(key);
    temp -> next = *head;
    * head = temp;
}
void IAE(node **head, int key) {
    node *temp = newnode(key);
    if ( *head == NULL) {
        node *itr = * head;
        while (itr -> next != NULL)
            itr = itr -> next;
    } else {
        *head = temp;
    }
}
void IBK(node **head, int key, int k) {
    if(*head == NULL || (*head)->data == k){
        IAF(*head, key);
        return;
    }
    node *itr = *head, *temp = newnode(key);
    while(itr->next != NULL && itr->next->data != k){
        itr = itr->next;
    temp->next = itr->next;
    itr->next = temp;
}

void IAK(node **head, int key, int k) {
    node *itr = *head, *temp = newnode(key);
    while(itr->next != NULL && itr->next->data != k){
        itr = itr->next;
    temp->next = itr->next;
    itr->next = temp;
}

bool search(node *head, int key) {
    while (head != NULL) {
        if (head -> data == key)
            return true;
        head = head -> next;
    }
    return false;
}

void Print(node * head) {
    while (head != NULL) {
        cout << head -> data << "->";
        head = head -> next;
    }

}
int main() {
    node * head = null;
    int ch;
    int key;
    do {

        cout << "Menu\n1.Iab\n3.IAE\n3.IBK\n4.IAK\n5.search\n6.print\nEnter";
        cin >> ch;
        switch (ch) {
            case 1:
                cin >> key;
                IAB( & head, key, k);
                break;
            case 2:
                cin >> key;
                IAE( & head, key);
                break;
            case 3:
                cin >> key;
                IAK( & head, key, k);

                break;
            case 4: cin >> key >> k;
                    IAK(&head, key, k);
                break;
            case 5:
                cin >> key;
                if (search(head, key)) {
                    cout << key << " found in LL\n";
                } else {
                    cout << key << " not found\n";
                }
                break;
            case 6:
                print("Head");
                break;

            default:
                cout << "Exiting Program BYE";
        }
    }
}
}