#include <iostream>
using namespace std;

// class node {
//     public:
//     int data;
//     node *next;

//     node (int d){
//         data = d;
//         next = NULL;
//     }
// };
struct node {
    int data;
    node *next;

    node (int d){
        data = d;
        next = NULL;
    }
};

/*  passing a pointer variable by Reference so that head value refelect in main also
    since by doing this *&head we have access of the actual head all the time */
void insertAtHead(node *&head, int data) {
    // check if head is pointing to NULL
    if (head == NULL) {
        head = new node(data);
        return;
    }
    //create new node as head node
    node *newnode = new node(data);
    newnode -> next = head;
    head = newnode;

}

void insertAtTail(node *&head, int data) {
    //check if head is pointing to null, create a head node 
    if(head == NULL) {
        head = new node(data);
        return;
    } 
    //in starting the tail pointer is pointing to head, make it traverse upto the end of the linkedlist
    node *tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    //create the tail node 
    tail->next = new node(data);
    return;
}

//  head passing by value
void print(node *head) {
    //traverse throught the array and print every node data
    while (head != NULL) {
        cout << head -> data << "->";
        head = head -> next;
    }
    cout << endl;
}

//calculate the length of the linkedlist
int length(node *head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

//search a key 
bool searchKey(node *head, int key) {
    while(head != NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

void deleteHead(node *&head){
    if(head == NULL)
        return;
    node *temp = head->next;
    delete head;
    head = temp;
}

void deleteTail(node *head){
    if(head == NULL)
        return;

    node *tail = head;
    while((tail->next)->next != NULL){
        tail = tail->next;
    }

    tail->next = NULL;
    delete tail;
}

void operator <<(ostream &os, node *head){
    print(head);
    return;
}

void reverseLL (node *&head) {
    node *C = head;
    node *P = NULL;
    node *N;

    while(C != NULL) {
        //save the next node
        N = C->next;
        //make the current node point to p
        C->next = P;
        //update P & C take them 1 step forward
        P = C;
        C = N;
    }
    head = P;
}

node* recursiveReverseLL(node *&head) {
    //samll ll
    if(head->next == NULL || head == NULL)
        return head;
    //recursive case
    node *small = recursiveReverseLL(head->next);

    (head->next)->next = head;
    head->next = NULL;
    return small;
}

node* middleElement(node *head){
    if(head->next == NULL || head == NULL)
        return head;
    
    node *slow = head;
    node *fast = head->next;

    while(fast!=NULL && fast->next != NULL) {
        fast = (fast->next)->next;
        slow = slow->next;
    }
    return slow;
}

//find the K'th node in the linked list from last
void findNodeElement(node *head, int k) {
    if(head == NULL)
        return;

    int len = length(head);
    int point = len - k;

    int count = 0;
    node *ref_pointer = head;

    while(count != point) {
        ref_pointer = ref_pointer->next;
        count++;
    }
    cout << ref_pointer->data;
}

int main() {
    node *head = NULL;
    int choice;
    char ch;
    int key;
    do{
        cout << "MENU :- \n1.Insertion At Head \n2.Insertion At Tail \n3.Print\n4.Length\n5.Search Key\n6.Delete Head\n7.Delate Tail\n8.Print Entire LL\n9.Reverse LL\n10.Recursive Reversal\n11.Middle Node\n12.Find node data from last\n";
        cout << "\nEnter choice : ";
        cin >> choice;
        switch(choice) {
            case 1:
                cin >> key;
                insertAtHead(head, key);
                break;
            case 2:
                cin >> key;
                insertAtTail(head, key);
                break;
            case 3:
                print(head);
                break;
            case 4:
                cout << length(head);
                break;
            case 5:
                cin >> key;
                searchKey(head, key);
                break;
            case 6:
                deleteHead(head);
                break;
            case 7:
                deleteTail(head);
                break;
            case 8:
                cout << head;
                break;
            case 9:
                reverseLL(head);
                break;
            case 10:
                recursiveReverseLL(head);
                break;
            case 11:
            {
                node* mid = middleElement(head);
                cout << mid->data << endl;
                break;
            }
            case 12: 
            {
                cin >> key;
                findNodeElement(head, key);
                break;
            }
            default:
                cout << "\ninvalid input !\n";
                break;
        }
        cout << "\nContinue : (Y/N)";
        cin >> ch;
    } while(ch == 'y' || ch == 'Y');
    cout << "\nexiting...\n";
    return 0;
}