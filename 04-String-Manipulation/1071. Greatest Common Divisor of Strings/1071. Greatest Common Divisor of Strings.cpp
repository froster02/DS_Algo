1class Solution {
2    // The Euclidean Algorithm efficiently finds the Greatest Common Divisor
3    // (GCD) of two numbers by repeatedly replacing the larger number with the
4    // remainder of their division.
5    
6    int solve_gcd(int a, int b) {
7        // Ensure a and b are non-negative
8        a = abs(a);
9        b = abs(b);
10        // Use the Euclidean algorithm
11        while (b != 0) {
12            int temp = b;
13            b = a % b;
14            a = temp;
15        }
16        return a;
17    }
18
19public:
20    string gcdOfStrings(string str1, string str2) {
21        // whether both strings are made by repeating the same base string
22        if (str1 + str2 != str2 + str1)
23            return ;
24
25        // Find the GCD of the lengths of str1 and str2
26        int gcdLength = solve_gcd(str1.length(), str2.length());
27
28        // Return the substring of length gcdLength
29        return str1.substr(0, gcdLength);
30    }
31};