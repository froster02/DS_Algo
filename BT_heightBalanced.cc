#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int d){
        data = d;
        left = right = NULL;
    };
};

node *buildTree(){
    int d;
    cin >> d;
    if(d == -1) return NULL;

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void printPostOrder(node *root){
    if(root == NULL)    return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

int height(node *root){
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(node *root){

    if(root == NULL)    
        return true;

    int ls = height(root->left);
    int rs = height(root->right);

    if(abs(ls - rs) <= 1    &&  isBalanced(root->left)  &&  isBalanced(root->right))
        return true;
    
    return false;
}

int main(){

    cout << endl;
    node *root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    printPostOrder(root);
    cout << endl;
    cout << height(root);
    cout << endl;

    if(isBalanced(root))
        cout << "Balanced";
    else 
        cout << "Not Balanced";
    cout << endl;
    return 0;
}  