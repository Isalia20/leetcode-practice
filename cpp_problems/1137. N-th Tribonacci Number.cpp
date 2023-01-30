class Solution {
public:
    int tribonacci(int n) {
        vector<int> tribonacci_numbers;
        if (n <= 1){
            return n;
        } else if (n == 2)return 1;

        tribonacci_numbers.push_back(0);
        tribonacci_numbers.push_back(1);
        tribonacci_numbers.push_back(1);
        for (int i = 3; i <= n; i++){
            tribonacci_numbers.push_back(tribonacci_numbers[i - 3] + tribonacci_numbers[i - 2] + tribonacci_numbers[i - 1]);
        }

        return tribonacci_numbers[n];
    }
};
