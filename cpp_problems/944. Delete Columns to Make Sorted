#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int result_counter = 0;
        unordered_set<int> used_cols;

        for (int i = 1; i < strs.size(); i++){
            for (int j = 0; j < strs[i].size(); j++){
                if (used_cols.count(j)){
                    continue;
                } else {
                    if (strs[i][j] < strs[i - 1][j]){
                        used_cols.insert(j);
                        result_counter++;
                    }
                }
            }
        }
        return result_counter;
    }
};
