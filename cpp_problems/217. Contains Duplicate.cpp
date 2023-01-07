#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> num_counts;

        for (int i = 0; i < nums.size(); i++){
            num_counts[nums[i]] += 1;
        }

        for (auto it : num_counts){
            if (it.second > 1){
                return true;
            }
        }
        return false;
    }
};
