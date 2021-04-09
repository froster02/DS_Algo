#include <iostream>
#include <unordered_map>
using namespace std;

struct Trie{
    int count = 0;
    unordered_map <int, Trie*> umap;
};

Trie *newNode() {
    Trie *node = new Trie;
    node->count = 1;
    return node;
}

void insert(Trie *root, const string &str){
    if(root == nullptr){
        return false;
    }
    Trie *temp = root;
    
    for(int i = 0; i < str.length(); i++){
        char x = str[i];
        if(temp->umap.find(x) == temp->umap.end()){
            temp->umap = newNode();
        }
        temp = temp->umap[x]->count++;
    }
}

void search(Trie *root, const string &str) {
    if(root == nullptr){
        return false;
    }

    if(root->count == 1){
        
    }
}

int main(){

    Trie *root = nullptr;

    insert(root, "cobra");
    cout << search(root, "cobra");

    insert(root, "dog");
    cout << search(root, "dog");

    insert(root, "dove");
    cout << search(root, "dove");

    insert(root, "duck");
    cout << search(root, "duck");

    return 0;
}