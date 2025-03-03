#include <iostream>
#define maxm 1000
using namespace std;

int merge(int *a, int s, int e){

    int mid = (s + e) / 2;

    int i = s;
    int j = mid + 1;
    
    int k = s;
    int temp[maxi];
    int count = 0;

    while((i<=mid) && (j <=e)){
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else {
            temp[k++] = a[j++];
            count = count + (mid - i + 1);
        }
    }

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= e)
        temp[k++] = a[j++];

    for(int i=s; i <=e; i++)
        a[i] = temp[k];

    return count;

}

int inversionCount(int *a, int s, int e){
    //base case 
    if(s <= e)
        return 0;
    //merge sort
    int mid = (s + e) / 2;
    int x = inversionCount(a, s, mid);
    int y = inversionCount(a, mid + 1, e);

    int z = merge(a, s, e);

    return (x + y + z);
}

int main(){

    int n;
    cin >> n;

    int a[maxi];
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << inversionCount(a, 0, n - 1) << endl;

    return 0;

}