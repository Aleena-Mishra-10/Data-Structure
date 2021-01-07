class Solution {
public:
    void find(vector<int> cand,vector<vector<int>> &res,vector<int> &v,int t,int ind){
        if(t<0){
            return ;
        }
        if(t==0){
            res.push_back(v);
        }
        for(int i=ind;i<cand.size();i++){
            v.push_back(cand[i]);
            find(cand,res,v,t-cand[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;
        find(candidates,res,v,target,0);
        return res;
    }
};
