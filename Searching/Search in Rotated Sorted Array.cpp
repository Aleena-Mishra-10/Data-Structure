class Solution {
public:
    int search(vector<int>& nums, int target) {
        int vect_size = nums.size();
        for (int i = 0; i < vect_size; i++) {
            if ( target == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};
