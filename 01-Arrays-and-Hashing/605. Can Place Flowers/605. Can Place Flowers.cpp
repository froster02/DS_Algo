1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int len = flowerbed.size();
5
6        for (int i = 0; i < len; i++) {
7
8            if (flowerbed[i] == 0) {
9
10                // (i == 0)  -> if i'm at the first idx.
11                // (len - 1) -> if i'm at the last idx.
12                bool leftKhali  = ((i == 0)         || (flowerbed[i - 1] == 0));
13                bool rightKhali = ((i == (len - 1)) || (flowerbed[i + 1] == 0));
14
15                if (leftKhali && rightKhali) {
16                    flowerbed[i] = 1;
17                    n--;
18
19                    if (n == 0)
20                        return true;
21                }
22            }
23        }
24
25        return (n <= 0);  
26    }
27};
28