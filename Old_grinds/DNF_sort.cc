#include <iostream>
#include <ctime>
using namespace std;
void dnf_sort(int a[], int n){
    //very useful for sorting 0s, 1s, and 2s
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high) {

        //make the starting area for 0s
        if(a[mid] == 0){
            swap(a[mid], a[low]);
            low++;
            mid++;
        }
        //make the middle area for 1s
        if(a[mid] == 1){
            mid++;
        }
        //make the ending area for 2s
        if(a[mid] == 2){
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main(){
    time_t start = clock();
    int a[] = {2,1,1,1,1,0,1,1,1,0,0,2,0};
    int n = sizeof(a) / sizeof(int);

    dnf_sort(a, n);

    for(int i : a)
        cout << i << "|";
    cout << endl;
    
    time_t end = clock();
    cout << end - start <<"ms"<< endl;

    return 0;    
}