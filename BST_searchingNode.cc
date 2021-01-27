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

//print BST level by level
void bfs(node *root){
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

//accepts the old root node & data & returns the new root node
node *insertInBST(node *root, int data){
    //base case
    if(root == NULL) {
    //here writting new will automatically return the address of the node
        return new node(data);
    }
    //rec case
    if(data <= root->data){
        root->left = insertInBST(root->left, data);
    } else {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *build_BST(){
    //read a list of number till -1 and also these numbers will be inserted into BST
    int d;
    cin >> d;

    node *root = NULL;

    while(d != -1){
        root = insertInBST(root, d);
        cin >> d;
    }
    return root;
}

bool search(node *root, int data){
    if(root == NULL)    
        return false;
    if(root->data == data)
        return true;
    //recursively search in left and right subtree
    if(data <= root->data)
        return search(root->left, data);
    else 
        return search(root->right, data);
}

int main(){

    node *root = build_BST();

    cout << endl;

    bfs(root);

    int s;
    cin >> s;

    cout << endl;

    if(search(root, s))
        cout << "Present";
    else 
        cout << "Not Present";

    cout << endl;
    
    return 0;
}