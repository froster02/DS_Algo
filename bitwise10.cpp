/*
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

Input Format
Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

Constraints
Q,a,b are integers.

Output Format
Q lines, each containing an output for your query.

Sample Input
2
1 1
10 15
Sample Output
1
17
*/
#include <iostream>
using namespace std;
int main() {
    int t, ans[10] = {0};
    cin >> t;
    int i = t;
    for(int j = 0; t > 0; j++) {
        int a, b, res = 0;
        cin >> a >> b;
        while(a <= b){
            int n = a;
            while(n > 0){
                n = n & (n - 1);
                res++;
            }
            a++;
        }
        ans[j] = res;
        t--;
    }
    for(int j=0; j<i; j++)
        cout << ans[j] << endl;
    return 0;
}