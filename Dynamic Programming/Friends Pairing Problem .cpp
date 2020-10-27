class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        long long mod=10^9+7;
        int a=1,b=2,c=0;
        if(n<=2){
            return n;
        }
        else{
            for(int i=3;i<=n;i++){
                c=b%mod+(i-1)%mod*(a%mod)%mod;
                a=b;
                b=c;
            }
        }
        return c;
    }
}; 
