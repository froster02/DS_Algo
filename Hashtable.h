#include <iostream>
#include <cstring>
using namespace std;

template<typename T>

class Node{

public:
    string key;
    T value;
    Node<T> *next;

    Node(string key, T val){
        this->key = key;
        next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

template<typename T>

class HashTable{

    Node<T> **table;
    int current_size;
    int table_size;

private:
    int hashFn(string key){
        int idx = 0;
        int p = 1;
        for(int j = 0; j < key.length(); j++){
            idx = idx + (key[j] * p) % table_size;
            idx = idx % table_size;
            p = (p * 27) % table_size;
        }
        return idx;
    }

public:
    //table size 7
    HashTable(int ts = 7){
        table_size = ts;
        //data type of each bucket in the table
        table = new Node<T> *[table_size];
        current_size = 0;
        //put null int all bucket
        for(int i = 0; i < table_size; i++){
            table[i] = NULL;
        }
    }
    void insert(string key, T value){
        int idx = hashFn(key);
        Node<T> *n = new Node<T>(key, value);

        //insert at head of the idx linklist with id = idx
        n->next = table[idx];
        table[idx] = n;
        current_size++;

    }

    void print(){
        for(int i = 0; i < table_size; i++){
            cout << "Bucket " << i << "->";
            Node<T> *temp = table[i];
            while(temp != NULL){
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // T search(string key){

    // }

    // void erase(string key){

    // }
};