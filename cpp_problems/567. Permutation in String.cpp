class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> char_freq_s1(26, 0);
        vector<int> char_freq_s2(26, 0);

        int left = 0;
        
        int total_matches = 0;
        
        // if first string is bigger than second
        if (s1.size() > s2.size()){
            return false;
        }

        for (int i = 0; i < s1.size(); i++){
            char_freq_s1[int(s1[i]) - int('a')]++;
            char_freq_s2[int(s2[i]) - int('a')]++;
        }
        
        for (int i = 0; i < 26; i++){
            if (char_freq_s1[i] == char_freq_s2[i]){
                total_matches++;
            }
        }

        for (int right = s1.size(); right < s2.size(); right++){
            if (total_matches == 26){
                return true;
            }

            int index = int(s2[right]) - int('a');
            char_freq_s2[index]++;
            if (char_freq_s1[index] == char_freq_s2[index]){
                total_matches++;
            } else if (char_freq_s1[index] + 1 == char_freq_s2[index]) {
                total_matches--;
            }

            index = int(s2[left]) - int('a');
            char_freq_s2[index]--;
            if (char_freq_s1[index] == char_freq_s2[index]){
                total_matches++;
            } else if (char_freq_s1[index] - 1 == char_freq_s2[index]) {
                total_matches--;
            }
            left++;
        }
        return total_matches == 26;
    }
};
