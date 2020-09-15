class Solution {
public:
 int helper(vector<int> &nums,int i,unordered_map<int,int> &mp)
{
    if(i>=nums.size())
    {
        return 0;
    }
    
    if(mp.count(i))
    {
        return mp[i];
    }
    
    int maxans=0;
    
    for(int k=i;k<nums.size();k++)
    {
        maxans=max(maxans,nums[k]+helper(nums,k+2,mp));
    }
    
    mp[i]=maxans;
    
    return maxans;
    
}

int rob(vector<int>& nums) {
    
    unordered_map<int,int> mp;
    return max(helper(nums,0,mp),helper(nums,1,mp));
    
}
};
