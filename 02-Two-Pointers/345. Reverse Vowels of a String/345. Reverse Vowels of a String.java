1class Solution {
2
3    private boolean vowel(char ch) {
4        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
5    }
6
7    public String reverseVowels(String s) {
8        if (s == null || s.length() < 2)
9            return s;
10
11        char[] chars = s.toCharArray();
12        int n = chars.length;
13
14        int i = 0;
15        int j = n - 1;
16
17        while (i < j) {
18            if (vowel(chars[i]) && vowel(chars[j])) {
19                char temp = chars[i];
20                chars[i] = chars[j];
21                chars[j] = temp;
22                i++;
23                j--;
24            } else if (!vowel(chars[i])) {
25                i++;
26            } else {
27                j--;
28            }
29        }
30
31        return new String(chars);
32    }
33}