1class MovingAverage {
2public:
3
4    queue<int> q;
5    long long sum = 0;
6    int n = 0;
7
8    MovingAverage(int size) {
9        n = size;
10    }
11    
12    double next(int val) {
13        q.push(val);
14
15        sum = sum + val;
16
17        while(q.size() > n){
18            sum = sum - q.front();
19            q.pop();
20        }
21
22        return (double) sum / q.size();
23    }
24};