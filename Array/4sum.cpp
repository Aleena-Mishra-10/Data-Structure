class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::vector<std::vector<int>> ans;
        size_t sz = nums.size();
        std::sort(nums.begin(), nums.end());
        for(size_t i = 0; i < sz; ++i) {
            if(i && nums[i] == nums[i-1])
                continue;
            for(int j = i+1; j < sz; ++j) {
                if(j-1 != i && nums[j] == nums[j-1])
                    continue;
                size_t l = j+1, r = sz-1;
                while(l < r) {
                    int sum = nums[i] + nums[j] + nums[l] + nums[r];
                    if(target == sum) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l < r && nums[l] == nums[++l]);
                        while(l < r && nums[r] == nums[--r]);
                    }
                    else if (sum > target)
                        --r;
                    else
                        ++l;
                }
            }
        }
        return ans;
    }
};
