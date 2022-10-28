class Solution {
public:
    vector<vector<string>> res;
    bool isSafe(vector<string>&board, int col, int row){
        // check if row is valid
        for(int rowI = 0; rowI < row; rowI++){
            if(board[rowI][col] == 'Q') return false;
        }
        
        // check validation of first diagonal
        for(int rowI = row - 1, colI = col - 1; rowI >= 0 && colI >= 0; rowI--, colI--){
            if(board[rowI][colI] == 'Q') return false;
        }
        
        // check validation of first diagonal
        for(int rowI = row - 1, colI = col + 1; rowI >= 0 && colI < board.size(); rowI--, colI++){
            if(board[rowI][colI] == 'Q') return false;
        }
        return true;
    }
    void backtrack(vector<string> board, int row){
        if(row == board.size()){
            res.push_back(board);
            return;
        }
        for(int col = 0; col < board.size(); col++){
            if(isSafe(board, col, row)){ 
                board[row][col] = 'Q';
                backtrack(board, row+1);
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        std::vector <std::string> board(n, std::string(n, '.'));
        backtrack(board, 0);
        return res;
    }
};