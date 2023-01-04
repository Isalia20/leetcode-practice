#include <iostream>
#include <unordered_map>

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> frequency_map;
        int counter = 0;

        for (int i = 0; i < tasks.size(); i++){
            frequency_map[tasks[i]] += 1;
        }

        for (auto it : frequency_map){
            cout << it.first << " " << it.second << endl;
            cout << counter << endl;
            if (it.second == 1){
                return -1;
            }

            if (it.second % 3 == 0){
                counter += it.second / 3;
            } else if (it.second % 3 == 2){
                counter = counter + it.second / 3 + 1;
            } else if (it.second % 3 == 1){
                counter = counter + 2 + (it.second - 4) / 3 ;
            } else if (it.second % 2 == 0){
                counter += it.second / 2;
            }
            else {
                return -1;
            }
        }
        return counter;
    }
};
