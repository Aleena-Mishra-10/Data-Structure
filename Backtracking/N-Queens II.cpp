class Solution {
public:
    int count=0;

    bool isSafe(int board[][11],int i,int j,int n){
        //For checking col
        for(int row=0;row<n;row++){
            if(board[row][j]==1){
                return false;
            }
        }

        //Check for left diagonal
        int x=i;
        int y=j;
        while(x>=0 and y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }

        //Check for rightt diagonal
        x=i;
        y=j;
        while(x>=0 and y<n){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y++;
        }

        //The position is safe
        return true;
    }

    bool solveNQueen(int board[][11],int i,int n){
        //Base Case
        if(i==n){
            count++;
            //Returning false to get all possible configs
            return false;

        }

        //Try to place queen in curr row and call on remaining part
        for(int j=0;j<n;j++){
            if(isSafe(board,i,j,n)){
                //Place the Queen
                board[i][j]=1;

                bool nextQueenRakhPayenge=solveNQueen(board,i+1,n);

                if(nextQueenRakhPayenge){
                    return true;
                }

                //If we came here that means our position i,j is not right
                board[i][j]=0;

            }
        }
        return false;
    }
    int totalNQueens(int n) {
        int board[11][11]={0};
        solveNQueen(board,0,n);
        return count;
    }
};
