class Solution{
public:	
	void reverseColumns(vector<vector<int>> &arr, int N) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = 0, k = N - 1; 
             j < k; j++, k--) 
            swap( 
                arr[j][i], arr[k][i]); 
} 
  
// Function for do transpose of matrix 
void transpose(vector<vector<int>> &arr, int N) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = i; j < N; j++) 
            swap(arr[i][j], arr[j][i]); 
} 
	void rotateMatrix(vector<vector<int>> &arr, int N) {
	   transpose(arr,N); 
       reverseColumns(arr,N);
	}
};
