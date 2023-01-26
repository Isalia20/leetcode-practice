class Solution {
public:
    long number_four = 1;
    bool result;

    bool SearchPowers(int n){
        if (number_four == n){
            result = true;
            return result;
        }
        if (number_four > n){
            result = false;
            return result;
        }
        number_four *= 4;
        SearchPowers(n);
        return result or false;
    }

    bool isPowerOfFour(int n) {
        return SearchPowers(n);
    }
};
