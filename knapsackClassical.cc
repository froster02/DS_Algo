#include <iostream>
using namespace std;

int profit(int n, int c, int *wt, int *pr){
    
    //base case
    if(n==0 || c==0)
        return 0;
    
    int ans, exclude, include;
    ans = exclude = include = 0;

    //include
    if(wt[n-1] <= c){
        include = pr[n-1] + profit(n-1, c - wt[n-1], wt, pr);
    }
    //exclude
    exclude = profit(n-1, c, wt, pr);

    ans = max(include, exclude);

    return ans;
}

int main(){

    int weight[] = {1, 2, 3, 5};
    int price[] = {40, 20, 30, 100};

    int n = 4, c = 7;

    cout << profit(n, c, weight, price) << endl;

    return 0;
}