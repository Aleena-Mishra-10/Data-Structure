class Solution {
public:
    vector<vector<int>> res;
    void find(vector<int> nums,vector<int> &cur,int idx){
        res.push_back(cur);
        for(int i=idx;i<nums.size();i++){
            cur.push_back(nums[i]);
            find(nums,cur,i+1);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0){
            return res;
        }
        vector<int> cur;
        find(nums,cur,0);
        return res;
    }
};
