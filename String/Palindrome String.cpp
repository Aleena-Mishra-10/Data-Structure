class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int flag=1;
	    char ch;
	    for(int i=0;i<(int)S.length()/2;i++){
	        if(S[i]!=S[S.length()-1-i]){
	            flag=0;
	            break;
	        }
	    }
	    return flag;
	}

};
