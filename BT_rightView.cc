#include<iostream>
#include<queue>
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
    (root->left) = buildTree();
    (root->right) = buildTree();

    return root;
}

void bfsPrint(node *root){
    queue<node*> q;

    q.push(root);

    while(!q.empty()){
        node *f = q.front();
        cout << f->data << ", ";

        if(f->left) 
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return;
}

void printRightView(node *root, int level, int &maxLevel){
    if(root == NULL)    return;
    
    if(maxLevel < level){
        //if true, we have discovered new level
        cout << root->data << " ";
        maxLevel = level;
    }

    //right traverse
    printRightView(root->right, level + 1, maxLevel);
    
    //left traverse
    printRightView(root->left, level + 1, maxLevel);
}

int main(){

    node *root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    int maxLevel = -1;
    printRightView(root, 0, maxLevel);
    return 0;
}