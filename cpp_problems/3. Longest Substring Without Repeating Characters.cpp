class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> char_set;
        int first_pointer = 0;
        int second_pointer = 0;
        int biggest_substr = 0;

        while (second_pointer < s.size()){
            if (char_set.count(s[second_pointer])){
                while (char_set.count(s[second_pointer])){
                    char_set.erase(s[first_pointer]);
                    first_pointer++;
                }
            } else {
                if (second_pointer - first_pointer + 1 > biggest_substr){
                    biggest_substr = second_pointer - first_pointer + 1;
                }
                char_set.insert(s[second_pointer]);
                second_pointer++;
            }
        }
        return biggest_substr;
    }
};
