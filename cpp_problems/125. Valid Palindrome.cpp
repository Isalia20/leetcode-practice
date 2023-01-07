#include <cwctype>
#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        string new_string;

        int left = 0;
        int right = s.size() - 1;
        for (int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }

        while (left < right){
            if ((s[left]<48 || s[left] > 57) and s[left] < 97 || s[left] > 122 || s[left]==' ' ){
                left++;
                continue;
            }

            if ((s[right]<48 || s[right] > 57) and s[right] < 97 || s[right] > 122 || s[right]==' ' ){
                right--;
                continue;
            }

            if (s[left] == s[right]){
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
