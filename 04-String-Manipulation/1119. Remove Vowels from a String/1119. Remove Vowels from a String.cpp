1class Solution {
2public:
3    bool isVowel(char st) {
4        return (st == 'a' or st == 'e' or st == 'i' or st == 'o' or st == 'u');
5    }
6
7    string removeVowels(string s) {
8
9        string ans;
10        for (char itr : s) {
11            if (!isVowel(itr)) {
12                ans.push_back(itr);
13            }
14        }
15
16        return ans;
17    }
18};