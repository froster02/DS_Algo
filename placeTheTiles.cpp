#include <iostream>
using namespace std;

int buildTheWall(int a, int b){
    //base case 
    if(b <= 3)
        return 1;
    
    return buildTheWall(a, b - 1) + buildTheWall(a, b - 4);
}

int main(){

    int a = 4;
    int b;
    cin >> b;

    cout << buildTheWall(a, b) << endl;

    return 0;
}