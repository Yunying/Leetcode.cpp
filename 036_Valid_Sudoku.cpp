class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool valid[10];
        for (int i=0; i<10; i++) valid[i] = true;
        //Valid rows
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                if (board[i][j] == '.') continue;
                else if (board[i][j]-'0' > 9) return false;
                else if (valid[board[i][j]-'0']){
                    valid[board[i][j]-'0'] = false;
                }
                else{
                    return false;
                }
            }
            for (int k=0; k<10;k++) valid[k] = true;
        }
        
        //Valid cols
         for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                if (board[j][i] == '.') continue;
                else if (board[i][j]-'0' > 9) return false;
                else if (valid[board[j][i]-'0']){
                    valid[board[j][i]-'0'] = false;
                }
                else{
                    return false;
                }
            }
            for (int k=0; k<10;k++) valid[k] = true;
        }
        
        //Valid 3*3 board
        int boardnum = 0;
        int row = 0; int col = 0;        
        while (boardnum < 9){
             for (int i=row; i<row+3; i++){
                for (int j=col; j<col+3; j++){
                    if (board[i][j] == '.') continue;
                    else if (board[i][j]-'0' > 9) return false;
                    else if (valid[board[i][j]-'0']){
                        valid[board[i][j]-'0'] = false;
                    }
                    else{
                        return false;
                    }
                }
             }
             for (int k=0; k<10;k++) valid[k] = true;
             row += 3; 
             if (row > 6){
                 row = 0;
                 col += 3;
             }
             boardnum++;
        }
        return true;
    }
};