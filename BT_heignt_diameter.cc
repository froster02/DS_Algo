#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node (int d){
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

int height(node *root){
    if(root == NULL)    return 0;

    int ls = height(root->left);
    int rs = height(root->right);

    int h = max(ls, rs) + 1;
    
    return h;
}

int diameter(node *root){
    if(root == NULL)    return 0;

    int h1 = height(root->left);
    int h2 = height(root->right);

    //if diameter passes via root node
    int op1 = h1 + h2;

    //if diameter passes via left subtree
    int op2 = diameter(root->left);

    //if diameter passes via right subtree
    int op3 = diameter(root->right);

    return max(op1, max(op2, op3));
}

class Pair{
    public:
        int height;
        int diameter;
};
Pair fastDia(node *root){
    Pair p;
    if(root == NULL) {
        p.diameter = p.height = 0;
        return p;
    }
    Pair left = fastDia(root->left);
    Pair right = fastDia(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}
int diameterOpt(struct node* root, int* height) {
    int lh = 0, rh = 0;
 
    int ldiameter = 0, rdiameter = 0;
 
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0 
    }
 
    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);
 
    *height = max(lh, rh) + 1;
 
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}

int main(){

    node *root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

    cout << height(root) << endl;
    cout << diameter(root) << endl;
    
    Pair p = fastDia(root);
    cout << p.height << endl;
    cout << p.diameter << endl;

    return 0;
}