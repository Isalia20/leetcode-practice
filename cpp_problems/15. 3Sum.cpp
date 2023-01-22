class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int i = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i > 0 and nums[i - 1] == nums[i]){
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right){
                int threeSum = (nums[i] + nums[left] + nums[right]);
                if (threeSum == 0){
                    vector<int> intermediate_result = {nums[i], nums[left], nums[right]};
                    result.push_back(intermediate_result);
                    left++;
                    while (nums[left] == nums[left - 1] and left < right){
                        left++; 
                    }
                } else if (threeSum > 0){
                    right--;
                } else {
                    left++;
                }
            }
        }
        return result;
    }
};
