#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution{
	public:
		int romanToInt(string s){	
			unordered_map<string, int> roman_to_int_map;
			int counter = 0;
            int roman_letter_int;

			roman_to_int_map = {
								{"I", 1},
								{"V", 5},
								{"X", 10},
								{"L", 50},
								{"C", 100},
								{"D", 500},
								{"M", 1000},
                                {"IV", 4},
                                {"IX", 9},
                                {"XL", 40},
                                {"XC", 90},
                                {"CD", 400},
                                {"CM", 900}
								};
			int i = 0;
			while (i < s.length()){
				string roman_letter_first;
                string roman_letter_second = "";
                string roman_letter_both;
                roman_letter_first = s[i];
                if (i + 1 < s.length()){
                    roman_letter_second = s[i + 1];
                }
                roman_letter_both = roman_letter_first + roman_letter_second;
				auto roman_letter_int_double = roman_to_int_map.find(roman_letter_both);
				
				if (roman_letter_int_double != roman_to_int_map.end()){
					roman_letter_int = roman_letter_int_double -> second;
					i += 2;
				}
				else {
					roman_letter_int = roman_to_int_map[roman_letter_first];
					i += 1;
				}
				cout << roman_letter_int << endl;
				counter += roman_letter_int;
			}
			return counter;
		}
};

int main(){
	int a;
	Solution sol;
	a = sol.romanToInt("MCMXCIV");
	cout << a;
		
}

