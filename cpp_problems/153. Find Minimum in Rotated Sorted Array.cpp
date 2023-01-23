class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int minNumber = nums[0];

        while (left <= right){
            if (nums[left] < nums[right]){
                minNumber = min(minNumber, nums[left]);
                break;
            }

            int mid = (left + right) / 2;
            minNumber = min(minNumber, nums[mid]);
            if (nums[mid] >= nums[left]){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return minNumber;
    }
};
