class Solution {
public:
    void columnjob(int a, int b, vector<vector<int>>& vec) {
        int m = vec.size();

        for (int i = 0; i < m; i++) {
            vec[i][b] = 0;
        }
    }

    void rowjob(int a, int b, vector<vector<int>>& vec) {
        int n = vec[0].size();

        for (int j = 0; j < n; j++) {
            vec[a][j] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int, int>> zeros;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        for (auto [i, j] : zeros) {
            columnjob(i, j, matrix);
            rowjob(i, j, matrix);
        }
    }
};