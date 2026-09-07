1class Solution {
2    public String reverseWords(String s) {
3        int n = s.length();
4        StringBuilder sb = new StringBuilder();
5
6        int i = n - 1; // start from the end
7
8        while (i >= 0) {
9            while (i >= 0 && s.charAt(i) == ' ')
10                i--; // skip trailing spaces
11
12            if (i < 0)
13                break;
14
15            int end = i;
16            while (i >= 0 && s.charAt(i) != ' ')
17                i--; // find word start
18
19            sb.append(s, i + 1, end + 1); // append the word
20            sb.append(' ');
21        }
22
23        return sb.toString().trim();
24    }
25}