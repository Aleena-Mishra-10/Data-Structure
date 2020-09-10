class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0,b,n=secret.size();
        b=pairs(secret,guess,n);
        
        for(int i=0;i<n;i++) // Common characters with correct positions.
            if(secret[i]==guess[i])
                a++;
        string res=to_string(a)+'A'+to_string(b-a)+'B'; 
        return res;
    }
    int pairs(string s,string g,int size){
        int a1[11] = { 0 };
        int a2[11] = { 0 };
        int i , c=0;
        for(i=0;i<size;i++){
            a1[s[i] - '0']++;
        }
        for(i=0;i<size;i++){
            a2[g[i] - '0']++;
        }
        for (i = 0; i < 11; i++)
          c += (min(a1[i], a2[i]));
        
        return c;
    }
};
