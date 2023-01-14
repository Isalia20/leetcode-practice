class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<vector<int>> stack;
        vector<int> result(temperatures.size(), 0);
        
        for (int i = 0; i < temperatures.size(); i++){
            if (i == 0){
                vector<int> stack_member= {temperatures[i], i};
                stack.push_back(stack_member);
                continue;
            }
            while (stack.size() != 0 and stack.back()[0] < temperatures[i]){
                cout << i << endl;
                int stack_member_index = stack.back()[1];
                result[stack_member_index] = i - stack_member_index;
                stack.pop_back();
            }
            vector<int> stack_member = {temperatures[i], i};
            stack.push_back(stack_member);
        }
        return result;
    }
};
