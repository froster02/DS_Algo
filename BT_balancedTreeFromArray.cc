// #include <iostream>
// #include <queue>
// using namespace std;

// struct node{
//     int data;
//     node *left, *right;
//     node(int d){
//         data = d;
//         left = right = NULL;
//     };
// };

// void bfsPrint(node *root){
//     queue<node *>  q;
//     q.push(root);

//     while (!q.empty()) {
//         node *f = q.front();
//         cout << f->data << ", ";

//         if(f->left)     
//             q.push(f->left);
//         if(f->right)
//             q.push(f->right);
//     }
//     return;
// }

// node *buildTree(int *a, int s, int e){

//     if(s > e)   return NULL;

//     int mid = (s + e) / 2;

//     node *root = new node(a[mid]);

//     root->left = buildTree(a, s, mid - 1);
//     root->right = buildTree(a, mid + 1, e);

//     return root;

// }

// int main(){
//     int a[] = {1,2,3,4,5,6,7};
//     int n = 7;

//     node *root = buildTree(a, 0, n-1);
//     bfsPrint(root);

// }