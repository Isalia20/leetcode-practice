#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int iterator = digits.size() - 1;
        int memory = 0;
        if (iterator == 0){
            if (digits[iterator] == 9){
                vector<int> result = {1, 0};
                return result;
            } else {
                digits[iterator] += 1;
                return digits;
            }
        }

        if (digits[iterator] == 9){
            digits[iterator] = 0;
            memory = 1;
        } else {
            digits[iterator] += 1;
        }
        iterator--;
        
        while (iterator > 0){
            if (memory == 1){
                if (digits[iterator] == 9){
                    digits[iterator] = 0;
                    memory = 1;
                } else {
                    digits[iterator] += 1;
                    memory = 0;
                }
            }
            iterator--;
            
        }

        if (memory == 1){
            if (digits[iterator] == 9){
                digits[iterator] = 0;
                digits.insert(digits.begin(), 1);
            } else {
                digits[iterator] += 1;
            }
        }
        return digits;
    }
};
