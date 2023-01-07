class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int prefix = 1;
        int postfix = 1;

        // for first element
        for (int i = 0; i < nums.size(); i++){
            result.push_back(prefix);
            prefix *= nums[i];
        }
        cout << result[nums.size() - 1] << endl;
        for (int i = nums.size() - 1; i >= 0; i--){
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return result;
    }
};
