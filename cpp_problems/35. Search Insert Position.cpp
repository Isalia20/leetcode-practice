class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int midpoint;
        int result; 
        while (left <= right){
            midpoint = (left + right) / 2;
            if (nums[midpoint] == target){
                return midpoint;
            } else if (nums[midpoint] > target){
                right = midpoint - 1;
            } else {
                left = midpoint + 1;
            }
            }
            
        return left;
        }
    };
