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

void insertInMiddle(node *&head, int data, int position) {
    //corner case

    //if head is empty
    if(head == NULL || position == 0) {
        insertAtHead(head, data);

    //if given position is greater than the length of linkedlist, 
    } else if(position > length(head)) {
        insertAtTail(head, data);
    } else {
        //take position - 1 jumps
        int jump = 1;
        node *temp = head;
        while (jump <= position - 1){
            temp = temp->next;
            jump++;
        }
        //create new node
        node *newnode = new node(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

int main() {

    cout << endl;
    time_t s = clock();

    //make the head node point to NULL intitally
    node *head = NULL;
    //push the data node by node 
    insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    print(head);
    //insert a node in middle wherer head = head, 4 = data, 3 = position where the node will be adjusted
    insertInMiddle(head, 4, 3);

    print(head);

    //give 7 as data to tails point aka end node
    insertAtTail(head, 7);

    print(head);

    time_t e = clock();
    cout << "\ntime taken : " << e - s << " ms\n" << endl;
    return 0;
}