1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int c = 0, size = flowerbed.size(); 
5        
6        for (int i = 0; i < size; i++) {
7            if (flowerbed[i] == 0 &&
8                (i == 0 || flowerbed[i - 1] == 0) &&         // check if not the first element or the previous plot of the current plot is empty or not
9                (i == size - 1 || flowerbed[i + 1] == 0)) {  // check if the idx is not the last idx and next of the current plot is empty or not 
10                
11                flowerbed[i] = 1;  
12                c++;               
13                i++;              
14            }
15        }
16
17        return c >= n;
18    }
19};