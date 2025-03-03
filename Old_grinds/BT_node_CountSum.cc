#include <iostream>
#include <queue>
using namespace std;

struct node {
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

int count(node *root){
    if(root == NULL) return 0;
    int c = count(root->left) + count(root->right) + 1;
    return c;
}

void bfs_Sum(node *root){
    queue<node *> q;
    int sum = 0;
    q.push(root);
    while(!q.empty()){
        node *f = q.front();
        sum = sum + (f->data);
        q.pop();

        if(f->left != NULL)  q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
    cout << sum;
}

int main(){

    node *root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    cout << count(root) << endl;
    bfs_Sum(root);
    cout << endl;

    return 0;
}