#include <iostream>
using namespace std;
int main() {
    long long int n;
    int d=5, a=0;
    cin >> n;
    while((n/d)>0) {
        a += (n/d);
        d = d * 5;
    }
    cout << a;
}

//BELOW CODE WILL RUN UPTO 20! ONLY

// unsigned long long int fun(int x){
//     if(x > 1)
//         return (x * fun(x-1));
//     else 
//         return 1;
// }
// int main() {
//     unsigned long long int n, c=0, t, a[max], d=0;
//     cin >> n;
//     t = fun(n);

//     unsigned long long int i=0; 
//     while(t!=0){
//         a[i] = t%10;
//         t = t/10;
//         i++;
//         c++;
//     }

//     for(i=0; i<c; i++){
//         if(a[i] != 0)
//             break;
//         else if(a[i]==0 && a[i+1]!=0)
//             d++;
//         else if(a[i]==0 && a[i+1]==0)
//             d++;
//     }
//     cout << d;
// }