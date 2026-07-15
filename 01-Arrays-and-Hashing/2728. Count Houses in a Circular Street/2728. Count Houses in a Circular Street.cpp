1/**
2 * Definition for a street.
3 * class Street {
4 * public:
5 *     Street(vector<int> doors);
6 *     void openDoor();
7 *     void closeDoor();
8 *     bool isDoorOpen();
9 *     void moveRight();
10 *     void moveLeft();
11 * };
12 */
13class Solution {
14public:
15    int houseCount(Street* street, int k) {
16        for (int i = 0; i < k; i++) {
17            // close the door and move forward.
18            street->closeDoor();
19            street->moveRight();
20        }
21
22        // create a uniqure marker
23        street->openDoor();
24
25        int ans = 1;
26        street->moveRight();
27
28        while (!street->isDoorOpen()) {
29            ans++;
30            street->moveRight();
31        }
32
33        return ans;
34    }
35};