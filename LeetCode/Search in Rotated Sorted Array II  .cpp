class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        int start(0), end(size - 1);
        while(start <= end)
        {
            while(start+1 <= end and nums[start] == nums[start+1])
                start++;
            while(end-1 >= 0 and nums[end] == nums[end-1])
                end--;
            int mid = start + ((end - start) >> 1);
            if(nums[mid] == target)
                return true;
            else if(nums[mid] <= nums[end])
            {
                if(nums[mid] < target and target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else if(nums[mid] >= nums[start])
            {
                if(nums[mid] > target and target >= nums[start])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return false;
    }
};
