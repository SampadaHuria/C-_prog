#include <iostream>
#include <vector>
using namespace std;

class Solution {
    void mark_curr_island(vector<vector<char>>& matrix, int x, int y, int r, int c) {
        if (x < 0 || x >= r || y < 0 || y >= c || matrix[x][y] != '1') {
            return;
        }
        matrix[x][y] = '2';
        mark_curr_island(matrix, x + 1, y, r, c); // DOWN
        mark_curr_island(matrix, x, y + 1, r, c); // RIGHT
        mark_curr_island(matrix, x - 1, y, r, c); // TOP
        mark_curr_island(matrix, x, y - 1, r, c); // LEFT
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if (rows == 0)
            return 0;
        int cols = grid[0].size();

        int num_of_islands = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    mark_curr_island(grid, i, j, rows, cols);
                    num_of_islands += 1;
                }
            }
        }
        return num_of_islands;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<vector<char>> matrix = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    int result = solution.numIslands(matrix);

    cout << "Number of islands: " << result << endl;

    return 0;
}
