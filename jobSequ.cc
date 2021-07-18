#include <iostream>
#include <vector>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}
int main(){
    vector<pair<int, int> > jobs;
    int n, profit, deadline;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> profit >> deadline;
        job.push_back(make_pair(profit, deadline));
    }

    sort(job.begin(), job.end(), compare);

    int maxEndTime = 0;
    for(int i = 0; i < jobs.size(); i++){
        if(jobs[i].second > maxEndTime)
            maxEndTime = jobs[i].second;
    }
    int fill[maxEndTime];
    int count = 0, maxProfit = 0;
    for(int i = 0; i < maxEndTime; i++){
        fill[i] = -1;
    }
    for(int i = 0; i < n; i++){
        int j = jobs[i].second - 1;
        while(j >= 0 && fill[j] != -1){
            j--;
        }
        if(j >= 0 && fill[j] == -1){
            fill[j] = i;
            count++;
        }
        if(j >= 0 && fill[j] == -1){
            fill[j] = i;
            count++;
            maxProfit += jobs[i].first;
        }
    }
    cout << count << " " << maxProfit << endl;
}