#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_indices;
	
        for (int i = 0; i < nums.size(); i++){
            auto target_complement_index = num_indices.find(target - nums[i]);
            if (target_complement_index != num_indices.end()){
                return {target_complement_index -> second, i};
            }
            num_indices[nums[i]] = i;
        }
        return {0};
    }
};
