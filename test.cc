#include<iostream>
using namespace std;
struct node
{
    node * next;
    node * prev;
    int data;
};
node *newnode(int key)
{
    node *temp = new node();
    temp->data = key;
    temp->next = NULL;
    return temp;
}
void IAB(node**head,int key){
    node *temp = newnode(key);
    if(*head==NULL){
        *head=temp;
        (*head)->prev=NULL;
        return;
    }
    temp->next = *head;
    (*head)->prev=temp;
    *head = temp;
}
void IAE(node**head , int key)
{
    node *temp = newnode(key);
    node *itr=*head;
    while(itr->next!= NULL)
    {
      itr=itr->next;

    }
    itr->next=temp;
    temp->prev=itr;
}
bool find(node*head , int key)
{
    while(head!=NULL)
    {
        if(head->data == key)
             return true;

        head = head->next;
    }
    return false;
}
void delete1(node*&head,int key)
{
    if(*head==NULL||(head)->data==key)
        *head=NULL;
    node *temp=*head,*ptr;
    while(temp!=NULL){
        if((temp->next)->data==key){
            ptr=temp->next;
            temp->next=(temp->next)->next;
            (temp->next)->prev=temp;
            delete ptr;
            return;
        }
        temp=temp->next;
    }
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
void IAB(node **head , int k)
{
    if(head == NULL)
    {
        node *temp = new node();
        temp->data = k;
        temp->next = NULL;
        *head = temp;
    }

        node temp = new node();
        temp->data = k;
        temp->next = *head;
        (*head) = temp; 
}