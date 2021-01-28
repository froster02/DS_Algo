#include <iostream>
#include <queue>
#include <climits>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int d){
        data = d;
        left = right = NULL;
    };
};

node *insertInBST(node *root, int data){
    if(root == NULL)
        return new node(data);
    
    if(data <= root->data){
        root->left = insertInBST(root->left, data);
    } else {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *build_BST(){
    int d;
    cin >> d;
    
    node *root = NULL;

    while (d != -1) {
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}

//print BST level by level
void print_bfs(node *root){
    queue<node *> q;
    q.push(root);

    q.push(NULL);
    
    while (!q.empty()){
        node *temp = q.front();
        if(temp == NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
            cout << temp->data << ", ";
            q.pop();

            if(temp->left != NULL) 
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
        }
    }
    return;
}

bool isBST(node *root, int minV = INT_MIN, int maxV = INT_MAX){
    if (root == NULL)
        return true;
    if((root->data >= minV) && (root->data <= maxV) && isBST(root->left, minV, root->data) && isBST(root->right, root->data, maxV)){
        return true;
    }
    return false;
}

int main(){

    node *root = build_BST();
    //5 3 7 1 6 8 -1

    cout << endl;

    print_bfs(root);
    
    cout << endl;
    
    if(isBST(root))
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}


