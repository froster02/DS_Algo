#include <iostream>
using namespace std;

int MCM(int p[], int i, int j){
    if(i == j)  {return 0;}

    int k, count, min = INT_MAX;

    for(int k = i; k < j; k++){
        count = MCM(p, i, k) + MCM(p, k + 1, j) + (p[i - 1] * p[k] * p[j]);

        if(count < min)
            min = count;
    }
    return min;
}

int main(){
    // int a[] = {1,2,3,4,3};
    int a[] = {5,4,6,2,7};
    int n = sizeof(a)/sizeof(a[0]);
    cout << MCM(a, 1, n - 1);
}