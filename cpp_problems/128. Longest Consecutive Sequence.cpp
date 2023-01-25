class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> nums_set;
        int longest = 0;
        // convert vector to a set
        for (int i = 0; i < nums.size(); i++){
            nums_set.insert(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++){
            int longest_candidate = 1;
            if (nums_set.size() == 0){
                break;
            }

            nums_set.erase(nums[i]);
            if (nums_set.count(nums[i] - 1)){
                nums_set.erase(nums[i] - 1);
                longest_candidate++;
                int j = nums[i] - 2;
                while (nums_set.count(j)){
                    longest_candidate++;
                    nums_set.erase(j);
                    j--;
                }
            }

            if (nums_set.count(nums[i] + 1)){
                nums_set.erase(nums[i] + 1);
                longest_candidate++;
                int j = nums[i] + 2;
                while (nums_set.count(j)){
                    longest_candidate++;
                    nums_set.erase(j);
                    j++;
                }
            }

            // last in for loop
            if (longest_candidate > longest){
                longest = longest_candidate;
            }
        }
        return longest;
    }
};
