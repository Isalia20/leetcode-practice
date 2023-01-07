#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int iterator = s.size() - 1;
        int last_letter_index = -1;
        int last_word_counter = 0;
        int spaces = 0;
        while (iterator >= 0){
            cout << iterator << endl;
            if (s.substr(iterator, 1) != " "){
                last_letter_index = iterator;
                last_word_counter++;
                spaces = 1;
            }
            if (s.substr(iterator, 1) == " " and spaces == 1){
                break;
            }
            iterator--;
        }
        return last_word_counter;
    }
};
