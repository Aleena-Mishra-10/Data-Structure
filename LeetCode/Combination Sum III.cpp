class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> cur;
        fun(cur, 1, k, n);
        return ans; 
    }
    void fun(vector<int> &cur,int start,int k,int n){
        if(n==0 and k==0){
            ans.push_back(cur);
            return ;
        }
        if(k==0){
            return;
        }
        for(int i=start;i<=9;i++){
            cur.push_back(i);
            fun(cur,i+1,k-1,n-i);
            cur.pop_back();
        }
    }
};
