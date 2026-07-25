1class Solution {
2
3    // Perform DFS to mark all connected land cells as visited.
4    private void dfs(char[][] grid, int row, int col, int rows, int cols) {
5
6        // Base case:
7        // Out of bounds OR water OR already visited.
8        if (row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] != '1') {
9            return;
10        }
11
12        // Mark current land cell as visited.
13        grid[row][col] = '0';
14
15        // Explore all four directions.
16        dfs(grid, row - 1, col, rows, cols); // Up
17        dfs(grid, row + 1, col, rows, cols); // Down
18        dfs(grid, row, col - 1, rows, cols); // Left
19        dfs(grid, row, col + 1, rows, cols); // Right
20    }
21
22    public int numIslands(char[][] grid) {
23
24        int rows = grid.length;
25        int cols = grid[0].length;
26        int islandCount = 0;
27
28        // Traverse every block in the grid.
29        for (int row = 0; row < rows; row++) {
30
31            for (int col = 0; col < cols; col++) {
32
33                // Found an unvisited island.
34                if (grid[row][col] == '1') {
35
36                    // Mark the entire island as visited.
37                    dfs(grid, row, col, rows, cols);
38
39                    // Increment island count.
40                    islandCount++;
41                }
42            }
43        }
44
45        return islandCount;
46    }
47}