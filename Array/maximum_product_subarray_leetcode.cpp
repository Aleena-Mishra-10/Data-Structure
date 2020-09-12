class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i;
        int n=nums.size();
        if(n==0){
            return -1;
        }
        int maxGlobal = nums[0] , maxCurrent = nums[0] , minCurrent = nums[0];
        for(i=1;i<n;i++){
            int savedMaxCurrent = maxCurrent;
            maxCurrent = max({nums[i], savedMaxCurrent * nums[i], minCurrent * nums[i]}); 
            minCurrent = min({nums[i], savedMaxCurrent * nums[i], minCurrent * nums[i]});
            maxGlobal = max({maxGlobal,maxCurrent, minCurrent}); 
        }
        return maxGlobal;
    }
};
