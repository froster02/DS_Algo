#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node (int d){
        data = d;
        left = NULL;
        right = NULL;
    };
};

node *buildTree(){
    int d;
    cin >> d;
    if(d==-1)
        return NULL;
    
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    
    return root;
}

void print_PreOrder(node *root){
    if(root == NULL)    return;
    //otherwise, print root first followed by subtree
    cout << root->data << " ";
    print_PreOrder(root->left);
    print_PreOrder(root->right);
}

void print_InOrder(node *root){
    if (root == NULL)   return;

    print_InOrder(root->left);
    cout << root->data << " ";
    print_InOrder(root->right);
}

void print_PostOrder(node *root){
    if (root == NULL) return;

    print_PostOrder(root->left);
    print_PostOrder(root->right);
    cout << root->data << " ";
}

int main(){

    node *root = buildTree();
    //3 4 -1 6 -1 -1 5 1 -1 -1 -1
    print_PreOrder(root);
    cout << endl;
    print_InOrder(root);
    cout << endl;
    print_PostOrder(root);
    cout << endl;
    return 0;
}