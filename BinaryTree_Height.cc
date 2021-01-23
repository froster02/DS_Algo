#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node *left, *right;

    node (int d){
        data = d;
        left = right = NULL;
    }
};

node *binaryTree(){
    int d;
    cin >> d;

    if(d == -1) return NULL;

    node *root = new node(d);
    root->left = binaryTree();
    root->right = binaryTree();

    return root;
}

int height(node *root){
    if (root == NULL) return 0;

    int ls = height(root->left);
    int rs = height(root->right);

    int h = max(ls, rs) + 1;
    
    return h;
}

void printKthLevel(node *root, int k){

    if(root == NULL) return;

    if(k == 1) {
      cout << root->data << " ";
      return;
    }

    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

int main(){

    node *root = binaryTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    cout << height(root) << endl;

    printKthLevel(root, 3);

    return 0;
}