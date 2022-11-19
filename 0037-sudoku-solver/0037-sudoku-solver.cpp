class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char value){
        // Check Col
        for(int colI = 0; colI < 9; colI++){
            if(board[row][colI] == value) return false;
        }
        // Check Row
        for(int rowI = 0; rowI < 9; rowI++){
            if(board[rowI][col] == value) return false;
        }
        // Check Box
        int rowI = row - row % 3, colI = col - col % 3;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(board[rowI+ i][colI + j] == value)
                return false;
            }
        }
        return true;
    }
    bool backtrack(vector<vector<char>> &board, int row, int col){
        if(row == 9) return true;
        if(col == 9) return backtrack(board, row+1, 0);
        if(board[row][col] != '.') return backtrack(board, row, col+1);

        for(char val = '1'; val <= '9'; val++){
            if(isValid(board, row, col, val)){ 
                board[row][col] = val;
                if(backtrack(board, row, col+1)) return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board, 0, 0);
    }
};