#include <iostream>
#include <unordered_map>
using namespace std;

struct Trie {
	bool lastWord;
	unordered_map <char, Trie*> umap;
};

Trie *newNode(){
	Trie *node = new Trie;
	node->lastWord = false;
	return node;
}

void insert(Trie *&root, const string &str){
	if(root == nullptr){
		root = newNode();
	}

	Trie *temp = root;

	for(int i = 0; i < str.length(); i++){

		char x = str[i];

		if(temp->umap.find(x) == temp->umap.end()){
			temp->umap[x] = newNode();
		}

		temp->lastWord = true;
	}
}

bool search(Trie *root, const string &str) {
	if(root == nullptr)
		return false;

	Trie *temp = root;

	for (int i = 0; i < str.length(); i++) {
		temp = temp->umap[str[i]];
		if(temp == nullptr)
			return false;
	}
	return temp->lastWord;
}

int main(){
	Trie *root = nullptr;
	
	insert(root, "geek");
	cout << search(root, "geek");

	insert(root, "for");
	cout << search(root, "for");

	insert(root, "geekk");
	cout << search(root, "geekk");

	insert(root, "sci");
	cout << search(root, "sci");

	return 0;
}