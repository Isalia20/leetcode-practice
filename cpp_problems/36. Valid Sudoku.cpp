class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, set<char>> columns;
        map<int, set<char>> rows;
        map<vector<int>, set<char>> squares;

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                int row_square = i / 3;
                int col_square = j / 3;
                vector<int> row_column_square = {row_square, col_square};
                if (rows[i].count(board[i][j]) or 
                    columns[j].count(board[i][j]) or 
                    squares[row_column_square].count(board[i][j])
                    ){
                    return false;
                }
                columns[j].insert(board[i][j]);
                rows[i].insert(board[i][j]);
                squares[row_column_square].insert(board[i][j]);
            }
        }
        return true;
    }
};
