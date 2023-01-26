class Solution {
public:
    long number_two = 1;
    bool result;

    bool SearchPowers(int n){
        if (number_two == n){
            result = true;
            return result;
        }
        if (number_two > n){
            result = false;
            return result;
        }
        number_two *= 2;
        SearchPowers(n);
        return result or false;
    }

    bool isPowerOfTwo(int n) {
        return SearchPowers(n);
    }
};
