#include <iostream> 
using namespace std; 
  
// continue work opposite to break

int main() { 
    // loop from 1 to 10 
    for (int i = 1; i <= 10; i++) { 
        // If i is equals to 6, 
        // continue to next iteration 
        // without printing 
        if (i == 6) 
            continue; 
        else
            // otherwise print the value of i 
            cout << i << " "; 
    } 
    return 0; 
} 
56 10 72 91 29 3 41 45 61 20 11 39 9 12 94
64 28 97 40 12 72 84 24 38 10