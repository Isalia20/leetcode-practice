class Solution {
public:
    bool canJump(vector<int>& nums) {
        int post = nums.size() - 1;
        int iterator = nums.size() - 2;
        
        while (post > 0){
            if ((post - iterator) <= nums[iterator]){
                post = iterator;
                iterator--;
                continue;
            }
            iterator--;
            if (iterator < 0){
                return false;
            }
        }
        return true;
    }
};
