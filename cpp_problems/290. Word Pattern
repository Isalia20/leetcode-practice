#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
private:
    void tokenize(string const &str, const char delim,
                vector<string> &out){
        // construct a stream from the string
        stringstream ss(str);
    
        string s;
        while (getline(ss, s, delim)) {
            out.push_back(s);
        }
    }

public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, string> letter_word_map;
        unordered_set<string> all_strings;
        vector<string> s_split; 
        char delimiter = ' ';
        tokenize(s, delimiter, s_split);

        if (s_split.size() != pattern.size()){
            return false;
        }

        for (int i = 0; i < pattern.size(); i++){
            string corresponding_string = s_split[i];
            string pattern_letter = pattern.substr(i, 1);
            if (letter_word_map.count(pattern_letter) != 0){
                if (letter_word_map[pattern_letter] != corresponding_string){
                    return false;
                }
            }
            letter_word_map[pattern.substr(i, 1)] = corresponding_string;
        }

        for (auto i: letter_word_map){
            if (all_strings.count(i.second)){
                return false;
            } else {
                all_strings.insert(i.second);
            }
        }
        return true;
    }
};
