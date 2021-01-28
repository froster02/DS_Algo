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

void bfs(node *root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *f = q.front();
        if(f == NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
            cout << f->data << ", ";
            q.pop();
            if(f->left != NULL)
                q.push(f->left);
            if(f->right != NULL)
                q.push(f->right);
        }
    }
}

// Function to convert binary tree into
// linked list by altering the right node
// and making left node point to NULL
void flattenPreOrder(struct node* root)
{
	// base condition- return if root is NULL
	// or if it is a leaf node
	if (root == NULL || root->left == NULL &&
						root->right == NULL) {
		return;
	}

	// if root->left exists then we have 
	// to make it root->right
	if (root->left != NULL) {

		// move left recursively
		flattenPreOrder(root->left);
	
		// store the node root->right
		struct node* tmpRight = root->right;
		root->right = root->left;
		root->left = NULL;

		// find the position to insert
		// the stored value 
		struct node* t = root->right;
		while (t->right != NULL) {
			t = t->right;
		}

		// insert the stored value
		t->right = tmpRight;
	}

	// now call the same function
	// for root->right
	flattenPreOrder(root->right);
}

// To find the inorder traversal
void inorder(struct node* root)
{
	// base condition
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}



class LinkedList {
    public:
        node *head;
        node *tail;
};
LinkedList flatten(node *root){
    LinkedList ll;

    if(root == NULL){
        ll.head = ll.tail = NULL;
        return ll;
    }
    //leaf node 
    if(root->left == NULL && root->right == NULL){
        ll.head = ll.tail = root;
        return ll;
    } 
    //*if left is not null
    if(root->left != NULL && root->right == NULL){
        LinkedList leftLL = flatten(root->left);
        leftLL.tail->right = root;

        ll.head = leftLL.head;
        ll.tail = root;
        return ll;
    }
    //*if right is not null
    if(root->left == NULL && root->right != NULL){
        LinkedList rightLL = flatten(root->right);
        root->right = rightLL.head;

        ll.head = root;
        ll.tail = rightLL.tail;
        return ll;
    }
    //* if both sides are NOT NULL
    LinkedList leftLL = flatten(root->left);
    LinkedList rightLL = flatten(root->right);

    leftLL.tail->right = root;
    root->right = rightLL.head;

    ll.head = leftLL.head;
    ll.tail = rightLL.tail;

    return ll;
}

int main(){

    node *root = build_BST();
    //5 3 7 1 6 8 -1
    bfs(root);
    cout << endl;
    LinkedList ll = flatten(root);
    node *temp = ll.head;
    while(temp != NULL){
        cout << temp->data << "-->";
        temp = temp->right;
    }
    cout << endl;
    flattenPreOrder(root);
    cout << endl;
    return 0;
}
