#include <iostream>

#include <vector>

using namespace std;

bool ratMaze(char maze[10][10], int solu[10][10], int i, int j, int m, int n){

    


    return false;
}


int main() {

    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };

    int solu[10][10];
    int n = 4, m = 4;
    
    bool ans = ratMaze(maze, solu, 0, 0, m - 1, n - 1);

    return 0;
}