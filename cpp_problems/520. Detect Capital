#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int contains_capital = 0;
        int all_letters_capital = 0;
        

        for (int i=0; i < word.size(); i++){
            if (word.substr(i, 1) >= "A" and word.substr(i, 1) <= "Z"){
                contains_capital = 1;
                all_letters_capital++;
            }
        }
        if (contains_capital == 1 and all_letters_capital == 1 and 
            word.substr(0, 1) >= "A" and word.substr(0, 1) <= "Z"){
                return true;
            }
        if (contains_capital == 1 and all_letters_capital != word.size()){
            return false;
        }
        // if (all_letters_capital == word.size()){
        //     return true;
        // }
        return true;
    }
};
