class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row = img.size();
        int col = img[0].size();

        
        vector<vector<int>> res(row, vector<int>(col, 0));
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                res[r][c] = avg(img, r, c, row, col);
            }
        }

        return res;
    }

private:
    int avg(vector<vector<int>>& img, int r, int c, int row, int col) {
        int ans = 0;
        int count = 0;

        
        int top = max(0, r - 1);
        int bottom = min(row, r + 2);
        int left = max(0, c - 1);
        int right = min(col, c + 2);

        
        for (int row = top; row < bottom; row++) {
            for (int col = left; col < right; col++) {
                ans += img[row][col];
                count += 1;
            }
        }

   
        return ans / count;
    }
};