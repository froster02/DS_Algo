/*
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya.
You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing 
two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

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

// #include <iostream>
// #include <cstdio>
// #define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// using namespace std;

// int findSetBits(int a, int b){
//     int ans = 0;
//     for(int i=a; i<=b; i++){
//         while(i > 0){
//             ans = ans + (i & 1);
//             i = i >> 1;
//         }
//         i = a++;
//     }
//     return ans;
// }

// int main() {
//     IO;

//     int t;
//     cin >> t;
//     while(t > 0){
//         int a, b;
//         cin >> a >> b;
//         cout << findSetBits(a, b) << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cstdio>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main() {
    IO;

    int t, cnt[64] = {0};
    cin >> t;
    while(t > 0){
        int a, b;
        cin >> a >> b;
        for(int i=a; i<=b;  ){
            int j = 0;
            while(i > 0){
                int last_bit = (i & 1);
                cnt[j] = cnt[j] + last_bit;
                j++;
                i = i >> 1;
            }
            i = a++;
        }
    }
    for(int i=0; i<64; i++)
        cout << cnt[i] << " " ;

    return 0;
}
