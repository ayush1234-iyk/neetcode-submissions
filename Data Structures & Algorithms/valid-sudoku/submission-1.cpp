class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> row[9] ; 
        set<char> col[9] ; 
        set<char> box[9] ; 

        for(int i =0 ; i<9 ; i++){
            for(int j =0 ; j<9 ; j++){
                
                if(board[i][j] == '.'){
                    continue  ; 
                }

                char x =  board[i][j] ; 

                int b = (i/3) * 3 +(j/3) ; 

                if(row[i].count(x) || col[j].count(x) || box[b].count(x)) {
                    return false  ; 
                } 

                row[i].insert(x) ; 
                col[j].insert(x) ; 
                box[b].insert(x) ; 

            }
        }
return true ;
    }
};
