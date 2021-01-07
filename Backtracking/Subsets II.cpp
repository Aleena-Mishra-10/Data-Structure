class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    void find(vector<int> nums,int idx){
        res.push_back(cur);
        for(int i=idx;i<nums.size();i++){
            if(i==idx || (i>idx and nums[i]!=nums[i-1])){
                cur.push_back(nums[i]);
                find(nums,i+1);
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        find(nums,0);
        return res;
    }
};
