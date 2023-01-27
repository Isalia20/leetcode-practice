class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first_pointer = 0;
        int second_pointer = 0;
        int max_diff = 0;

        while (second_pointer < prices.size()){
            if (prices[second_pointer] - prices[first_pointer] > max_diff){
                max_diff = prices[second_pointer] - prices[first_pointer];
            }
            if (prices[second_pointer] < prices[first_pointer]){
                first_pointer = second_pointer;
            }
            second_pointer++;
        }
        return max_diff;
    }
};
