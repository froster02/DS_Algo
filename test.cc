bool ans = ratMaze(grid, sol, 0, 0, m - 1, n - 1);

bool ratMaze(char grid[][n], int sol[][n], int i, int j){
    // base case
    if(i == m and j == n){
        // mark last n * n as visited
        sol[m][n] = 1;

        // print path
        for(int i = 0; i <= m; i++){
            for(int j = 0; j <= n; j++)
                cout << sol[i][j] << endl;
            cout << endl;
        }
        cout << endl;
        return true;
    }

    // rat should not within the maze range
    if(i > m or j > n){
        return false;
    }

    if(grid[i][j] == 'X'){
        return false;
    }

    sol[i][j] = 1;

    bool right = ratMaze(grid, sol, i, j + 1, m, n);
    bool left = ratMaze(grid, sol, i + 1, j, m, n);

    sol[i][j] = 0;

    if(right or left){
        return true;
    }
    return false;
}