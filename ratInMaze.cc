#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int solution[][10], int i, int j, int m, int n) {

    //base case
    if (i == m && j == n) {
        //as we are at the bottom right cornor of matrix so we will set it as 1
        solution[m][n] = 1;

        //print path
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++)
                cout << solution[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    
        return true;
    }

    //rat should remain inside the maze
    if (i > m || j > n) {
        return false;
    }

    //if index is found blocked return false
    if (maze[i][j] == 'X') {
        return false;
    }

    //assume solutiontion exist throught current index
    solution[i][j] = 1;

    //recursive calls for checking weather mice can go Right or Down
    bool RightSide = ratInMaze(maze, solution, i, j + 1, m, n, count); // i resemble the right side 
    bool DownSide = ratInMaze(maze, solution, i + 1, j, m, n, count); // j resemble the down side 

    //backtracking (fill the visited case with 0 while comes backward to the same path)
    solution[i][j] = 0;

    //weathe rightside or downside is possible consider it as true for visiting
    if (RightSide || DownSide) {
        count++;
        return true;
    }

    return false;

}

int main() {

    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };

    int solution[10][10] = {0};
    int n = 4, m = 4;

    bool ans = ratInMaze(maze, solution, 0, 0, m - 1, n - 1);

    if (ans == false)
        cout << "No path found!!!" << endl;

    return 0;
}