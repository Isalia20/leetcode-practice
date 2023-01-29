class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int most_freq_char;
        map <char, int> char_freq_map;

        while (right < s.size()){
            int most_freq = 0;
            int sum_freq = 0;
            // add to character count
            if (char_freq_map.count(s[right])){
                char_freq_map[s[right]]++;
            } else {
                char_freq_map[s[right]] = 1;
            }
            // check the most frequent character and the most frequency(the highest num)
            for (auto it: char_freq_map){
                sum_freq += it.second;
                if (it.second > most_freq){
                    most_freq_char = it.first;
                    most_freq = it.second;
                }
            }
            int remainder = sum_freq - most_freq;
            if (remainder > k){
                // subtract the left that we nudge to the right
                char_freq_map[s[left]]--;
                left++;
            }
            right++;
        }
        int sum_freq = 0;
        for (auto it: char_freq_map){
            sum_freq += it.second;
        }
        return sum_freq;
    }
};
