class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int final_number = nums[0];
        int iterator = 0;

        for (int i = 1; i < nums.size(); i ++){
            final_number = final_number ^ nums[i];
        }
        return final_number;
    }
};
