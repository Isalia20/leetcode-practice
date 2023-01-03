#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letter_map;
        if (s.size() != t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            if (letter_map.count(s[i])){
                letter_map[s[i]] += 1;
            } else {
                letter_map[s[i]] = 1;
            }
            if (letter_map.count(t[i])){
                letter_map[t[i]] -= 1;
            } else {
                letter_map[t[i]] = -1;
            }
        }

        for (auto it : letter_map){
            if (it.second != 0){
                return false;
            }
        }
        return true;
    }
};
