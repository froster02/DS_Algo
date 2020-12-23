#include <iostream>
#include <climits>
#define endl '\n'
using namespace std;

int main() {
    
    //input
    int n, no, a[100005];
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> no;
        a[i] = no;

        //take xor to sum up the unique elements
        res = res ^ no;
    }

    int temp = res;

    //position at which set bit is located
    int pos = 0;
    for(;((temp & 1) != 1) ;)  {
        pos++;
        temp = temp >> 1;
    }

    //the first bit in XOR is to position 'pos'
    int mask = (1 << pos);

    //find those number which contain set bit at position 'pos'
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] & mask) > 0) {
            x = x ^ a[i];
        }
    }

    //XOR with the previous result of unique elements and the number where it found the set bit
    y = res ^ x;
    cout << "res : " <<res << endl;
    cout << "x : " << x << endl;

    //output the value of unique numbers
    cout << min(x, y) << " " << max(x, y) << endl;
    return 0;
}