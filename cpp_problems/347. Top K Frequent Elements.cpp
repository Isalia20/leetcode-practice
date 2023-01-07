class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq_map;
        vector<vector<int>> numbers_sorted(nums.size() + 1);
        vector<int> result;

        // create frequency map of the numbers, O(n) operation
        for (int i = 0; i < nums.size(); i++){
            if (freq_map.count(nums[i])){
                freq_map[nums[i]] += 1;
            } else {
                freq_map[nums[i]] = 1;
            }
        }
        for (auto it: freq_map){
            numbers_sorted[it.second].push_back(it.first);
        }

        for (int i = numbers_sorted.size() - 1; i >= 0; i--){
            if (numbers_sorted[i].size() != 0){
                for (int j = 0; j < numbers_sorted[i].size(); j++){
                    if (result.size() == k){
                        break;
                    }
                    result.push_back(numbers_sorted[i][j]);
                }
            }
        }
        return result;
    }
};
