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

node *createTreeFromTrav(int *in, int *pre, int s, int e){
    static int i = 0;
    //base case
    if(s > e)   return NULL;
    //rec case
    node *root = new node(pre[i]);

    int idx = -1;

    for(int j = s; s <= e; j++){
        if(in[j] == pre[i]){
            idx = j;
            break;
        }
    }

    i++;
    root->left = createTreeFromTrav(in, pre, s, idx - 1);
    root->right = createTreeFromTrav(in, pre, idx + 1, e);
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

    int in[] = {3,2,8,4,1,6,7,5};
    int pre[] = {1,2,3,4,8,5,6,7};
    int n = sizeof(in)/sizeof(int);

    node *root = createTreeFromTrav(in, pre, 0, n -1);
    bfs(root);

    return 0;
}