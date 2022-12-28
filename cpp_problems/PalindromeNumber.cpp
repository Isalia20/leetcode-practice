#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 or (x % 10 == 0 and x != 0)){
        	return false;
		}
		if (x == 0){
			return true;
		}
		int counter = 0;
		int nashti;
		long total_number = 0;
		while (x != 0){
			nashti = x % 10;
			total_number = nashti + total_number * 10;
			if (x == total_number or x / 10 == total_number){
				return true;
			}
			x /= 10;
		}
		return false;
    }
};
