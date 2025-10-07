bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            for(int k=j+1;k<9;k++){
                if(board[i][j]==board[i][k]) return false;
            }
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            for(int k=i+1;k<9;k++){
                if(board[i][j]==board[k][j]) return false;
            }
        }
    }

    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            for(int r=i;r<i+3;r++){
                for(int c=j;c<j+3;c++){
                    if(board[r][c]=='.') continue;
                
                    for(int r2=i;r2<i+3;r2++){
                        for(int c2=j;c2<j+3;c2++){
                            if(r2==r && c2==c) continue;
                            if(board[r2][c2]==board[r][c]){
                                return false;
                            }
                        }
                }

                }
            }
        }
    }
    return true;
}