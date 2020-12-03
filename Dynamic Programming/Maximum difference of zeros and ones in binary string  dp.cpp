class Solution{
public:	
	int maxSubstring(string S)
	{
	      // Your code goes here
	    int n = S.length();
	    int A[n];
	    for(int i=0; i<n; i++)
	    {
	        if(S[i] == '1')
	            A[i] = -1;
	        else
	            A[i] = 1;
	    }
	    int temp=0, ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        temp += A[i];
	        ans = max(ans, temp);
	        temp = max(temp,0);
	    }
	    if(ans == 0)
	        return -1;
	    return ans;
	}
};
