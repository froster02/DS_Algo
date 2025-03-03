#include<iostream>
using namespace std;

struct node {
    node *next;
    node *prev;
    int data;
};
node *newnode(int key) {
    node *temp = new node();
    temp -> data = key;
    temp -> next = NULL;
    return temp;
}

int main() {
    node * head = NULL;
    int n, key;
    do {
        cout << "\nEnter\n1-IAB\n2-IAE\n3-find\n4-delete\n5-print\n6-exit\n";
        cin >> n;
        switch (n) {
            case 1:
                cin >> key;
                IAB( & head, key);
                break;
            case 2:
                cin >> key;
                IAE( & head, key);
                break;
            case 3:
                cin >> key;
                if (find(head, key))
                    cout << "\nfound\n";
                else
                    cout << "\nnot found\n";
                break;
            case 4:
                cin >> key;
                delete1( & head, key);
                break;
            case 5:
                print(head);
                break;
            case 6:
                exit(0);
        }
    } while (n != 6);

}