#include <iostream>
#include <algorithm>
#include <vector>
#define maxm 1000
#define ll long long
using namespace std;
//vector1
ll gfg1(vector<int> v1, int n1){
    int cummulativeSum1 = 0, maximumSum1 = 0;
    for(ll i = 0; i < n1; i++){
        cummulativeSum1 += v1[i];
        if(cummulativeSum1 < 0)
            cummulativeSum1 = 0;
    }
    maximumSum1 = max(cummulativeSum1, maximumSum1);
    return maximumSum1;
}
//vector2
ll gfg2(vector<int> v2, int n2){
    int cummulativeSum2 = 0, maximumSum2 = 0;
    for(ll i = 0; i < n2; i++){
        cummulativeSum2 += v2[i];
        if(cummulativeSum2 < 0)
            cummulativeSum2 = 0;
    }
    maximumSum2 = max(cummulativeSum2, maximumSum2);
    return maximumSum2;
}

int main() {
	//code
	int tc;
	cin >> tc;
	
	while(tc--){
	    
	    int n1, n2;
	    cin >> n1 >> n2;
	    
	    vector<int> v1(0);
	    vector<int> v2(0);
	    
	    for(ll i = 0; i < v1.size(); i++){
	        int num1;
	        cin >> num1;
	        v1.push_back(num1);
	    }
	    
	    for(ll i = 0; i < v2.size(); i++){
	        int num2;
	        cin >> num2;
	        v2.push_back(num2);
	    }
	    //function
	    int A = gfg1(v1, n1);
	    int B = gfg2(v2, n2);
	    cout << max(A, B);
	}
	return 0;
}