class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        
        int n = nums.size();
        int sum=0;
        int limit = 1<<n ;
        for(int i=0;i< limit;i++)
        {
            int xoR=0;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                {
                    xoR^= nums[j];
                }
            }
            sum+= xoR;
        }
        return sum;
        
        
        
    }
};
