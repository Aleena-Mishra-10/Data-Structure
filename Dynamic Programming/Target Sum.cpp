// 1. For all those guys stuck with the test case where in ZEROS are involved, The reason is that when zeros are involved in the array the INITIALISATION part of the code changes a bit. For Example:
// When the given input is arr=[0,0,0,0,1] the 0th column in the dp[n+1][s+1] matrix will no longer be filled with 1's. The reason is that whenever a particular element in the array arr[i] is encountered to be 0, the number of subsets in that array(till length i) which would give sum =0 would no longer be 1, as now in addition to the empty subset we also have a subset {0} which would give subset sum=0. so initialization : dp[0][0]=1
And include 0th column i.e j=0 while calculating the count for the subsetsums.
// OR

// 1. By multiplying pow(2,cnt), it will consider all the subsets of 0 which was not considered earlier.
//2. one more condition needs to be checked i.e.if((S+sum)%2!=0) then we would never get the difference S by partitioning the array into two subsets.

class Solution {
public:
    int countSubsetSum(vector<int>& nums, int sum)
        {
                int n = nums.size();
                int dp[n+1][sum+1];
                dp[0][0] = 1;
                int zero_count = 0;
                for(int i = 1;i<n+1;i++)
                {
                        if(nums[i-1] == 0)
                          zero_count++;
                        dp[i][0] = pow(2,zero_count);
                }
                for(int i = 1;i<sum+1;i++)
                {
                        dp[0][i]=0;
                }
                
                for(int i = 1;i<n+1;i++)
                {
                        for(int j = 1;j<sum+1;j++)
                        {
                                if(nums[i-1]<=j)
                                {
                                        dp[i][j] = dp[i-1][j - nums[i-1]] + dp[i-1][j];
                                }
                                else
                                        dp[i][j] = dp[i-1][j];
                        }
                }
        return dp[n][sum];
        }
    int findTargetSumWays(vector<int>& nums, int diff) {
        int sum = 0;
            for(auto i:nums)
                    sum+=i;
            if(sum<diff || (sum - diff)%2!=0)
                    return 0;
            return countSubsetSum(nums,(sum-diff)/2);
            
    }
};
