class Solution {
    public:
    
    bool knows(vector<vector<int> >& M, int i, int j){
    return M[i][j]==1? true: false;
    }
    int celebrity(vector<vector<int> >& M, int n) {
             int candidate=0;
     for(int i=1; i<n&&candidate<n-1; i++){
         if(knows(M,candidate,i)){
             candidate=i;
         }
     }
     for(int k=0; k<n; k++){
         if(k!=candidate && (!knows(M,k,candidate) || knows(M,candidate,k))){
             return -1;
         }
     }
    return candidate;
    }
};
