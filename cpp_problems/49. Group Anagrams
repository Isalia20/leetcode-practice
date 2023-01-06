class Solution {
private:
    void stringToLetterCounts(vector<int>& letters, string& string_to_convert){
        for (int j = 0; j < string_to_convert.size(); j++){
                char a = 'a';
                int char_a = (int)a;
                int char_int = (int)string_to_convert[j];
                int char_as_int = char_int - char_a;
                letters[char_as_int] += 1;
            }
    }


public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>, vector<string>> anagram_index_map;
        
        // for each string
        for (int i = 0; i < strs.size(); i++){
            vector<int> letters(26);  
            stringToLetterCounts(letters, strs[i]);
            string string_iter = strs[i];
            if (anagram_index_map.count(letters)){
                anagram_index_map[letters].push_back(string_iter);
            } else {
                anagram_index_map[letters] = {string_iter};
            }
        }

        for (auto it: anagram_index_map){
            result.push_back(it.second);
        }
        return result;
    }
};
