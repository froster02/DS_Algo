//https://www.spoj.com/problems/BUSYMAN/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//compare according to finishing time
bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main() {
    int t, n, s, e;
    cin >> t;

    vector<pair<int, int> > v(0);

    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }
        //activity selection (pick activity which finishes early)
        sort(v.begin(), v.end(), compare);

        //start picking activity
        int res = 1;
        int finish = v[0].second;

        //iterate over remaing activity
        for(int i = 1; i < n; i++){
            if(v[i].first >= finish){
                finish = v[i].second;
                res++;
            }
        }
        cout << res << endl;
        v.clear();

        return 0;
    }
    return 0;
}