#include <iostream>
#define endl '\n'
#define maxm 10
using namespace std;
int main(){

    int t, ans[maxi] = {0};
    cin >> t;
    int c = t;
    for(int i = 0; t > 0; t--){
        int n;
        cin >> n;
        int count = 0;
        for(    ; n > 0;    ){
            if(n & 1)
                count++;
            n = n >> 1;
        }
        ans[i] = count;
        i++;
    }
    for(int i=0; i<c; i++)
        cout << ans[i] << endl;
    return 0;
}