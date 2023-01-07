#include <iostream>
#include <string>

using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){
            int left = 0;
            int right = s.size() - 1;
            while (left < right){
                if (s.substr(left, 1) == s.substr(right, 1)){
                    left++;
                    right--;
                    continue;
                } else {
                    return false;
                }
            }
            return true;
        }
};

int main(){
    Solution sol;
    bool result;
    
    result = sol.isPalindrome("palindrome");
    cout << result << endl;
    return result;
}
