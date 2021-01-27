#include <iostream>
#include <queue>
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

    if(d == -1) 
        return NULL;

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void bfs(node *root){
    
    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node *f = q.front();
        cout << f->data << ", ";
        q.pop();

        //if right and left are NULL
        if(f->left)  q.push(f->left);
        if(f->right) q.push(f->right);    
    }
    return;
}

int main(){

    node *root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    bfs(root);
    
    return 0;
}