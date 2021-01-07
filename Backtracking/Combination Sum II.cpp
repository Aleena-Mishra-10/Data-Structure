class Solution {
public:
    void find(vector<int> cand,vector<vector<int>> &res,vector<int> &v,int t,int ind){
        if(t<0){
            return;
        }
        if(t==0){
            res.push_back(v);
        }
        for(int i=ind;i<cand.size();i++){
            if(i>ind && cand[i-1]==cand[i]){
                continue;
            }
            v.push_back(cand[i]);
            find(cand,res,v,t-cand[i],i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> v;
        find(candidates,res,v,target,0);
        return res;
    }
};
