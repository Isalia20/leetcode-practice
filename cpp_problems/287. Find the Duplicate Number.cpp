class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while (true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast){
                break;
            }
        }

        int slow_2 = 0;
        while (slow_2 != slow){
            slow_2 = nums[slow_2];
            slow = nums[slow];
        }
        return slow;
    }
};
