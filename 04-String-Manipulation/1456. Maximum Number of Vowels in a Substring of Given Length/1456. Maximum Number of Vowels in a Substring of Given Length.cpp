1class Solution {
2public:
3    bool isVowel(char c) {
4        c = tolower(c);
5        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
6    }
7
8    int maxVowels(string s, int k) {
9        int n = s.size();
10        int c = 0;
11        int maxCount = 0;
12
13        for (int i = 0; i < k; i++) {
14            if (isVowel(s[i]))
15                c++;
16        }
17        maxCount = c;
18
19        for (int i = k; i < n; i++) {
20            if (isVowel(s[i]))
21                c++;
22            if (isVowel(s[i - k]))
23                c--;
24            maxCount = max(maxCount, c);
25        }
26
27        return maxCount;
28    }
29};
30