#include <iostream>
using namespace std;

struct minHeapElement{
    char c;
    int freq;
    string s;
    minHeapElement *left, *right;
};

void headpify(minHeapElement *a[], int i, int n){
    int c1 = 2 * i;
    int c2 = 2 * i + 2;
    int minElement = i;
    
    if(c1 < n && a[c1]->freq < a[minElement]->freq)
        minElement = c1;
    else if(c2 < n && a[c2]->freq < a[minElement]->freq)
        minElement = c2;
    
    if(minElement != i){
        swap(a[i], a[minElement]);
        headpify(a, minElement, n);
    }
}

void MinHeapify(minHeapElement *a[], int n){
    for(int i = n/2; i >= 0; i--)
        headpify(a, i, n);
}

minHeapElement *extract_min(minHeapElement *a[], int &n){
    swap(a[0], a[n - 1]);
    minHeapElement *ret = a[n - 1];
    n--;
    headpify(a, 0, n);
    return ret;
}

void percolate_up(minHeapElement *a[], int i, int n){
    int parent = (i - 1) / 2;
    if(i == 0 || a[parent]->freq > a[i]->freq)
        return;
    swap(a[i], a[parent]);
    percolate_up(a, parent, n);
}

void insert(minHeapElement *a[], int &n, minHeapElement *he3){
    a[n] = he3;
    n++;
    percolate_up(a, n - 1, n);
}

void print(minHeapElement *root, string str){
    if(root->c != '$'){
        cout << root->c << " " << str << endl;
        return;
    }
    print(root->left, str+'0');
    print(root->right, str+'1');
}

int main(){
    int n;
    cin >> n;
    minHeapElement *a[n];
    char c;
    int freq;
    
    for(int i = 0; i < n; i++){
        cin >> c >> freq;
        a[i] = new minHeapElement();
        a[i]->c = c;
        a[i]->freq = freq;
        a[i]->left = a[i]->right = NULL;
    }
    MinHeapify(a, n);
    while(n != 1){
        minHeapElement *he1 = extract_min(a, n), *he2 = extract_min(a, n), *he3;
        he3 = new minHeapElement();
        he3->c = '$';
        he3->freq = he1->freq + he2->freq;
        he3->left = he1;
        he3->right = he2;

        insert(a, n, he3);
    }
    print(a[0], "");
}