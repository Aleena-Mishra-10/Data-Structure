class Solution{
public:
    int first(vector<int> m,int r,int c){
        for(int i=0;i<c;i++){
            if(m[i]==1){
                return i;
            }
        }
        return -1;
    }
	int rowWithMax1s(vector<vector<int> > mat, int n, int m) {
	    // Initialize first row as row with max 1s 
    int max_row_index = 0; 
    
    // The function first() returns index of first 1 in row 0. 
    // Use this index to initialize the index of leftmost 1 seen so far 
    int j = first(mat[0], 0, m-1); 
    if (j == -1) // if 1 is not present in first row 
      j = m - 1; 
  
    for (int i = 1; i < n; i++) 
    { 
        // Move left until a 0 is found 
        while (j >= 0 && mat[i][j] == 1) 
        { 
           j = j-1;  // Update the index of leftmost 1 seen so far 
           max_row_index = i;  // Update max_row_index 
        } 
    } 
    return max_row_index; 
	}

};
