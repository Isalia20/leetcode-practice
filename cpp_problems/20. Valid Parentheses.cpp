#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;


class Solution {
	public:
		bool isValid(string s){
			unordered_map<string, string> symbols_match = {{")", "("},
														   {"]", "["},
														   {"}", "{"}
														  };
			vector<string> stack;
			string last_bracket;
			
			// if size of string is 1 it means bracket wont be closed, or if it starts with a closing bracket its automatically false
			if (s.size() == 1 or symbols_match.count(s.substr(0, 1))){
				return false;
			}
			// put first element in the stack
			stack.push_back(s.substr(0, 1));
			
			// iterate over a string from the second character
			for (int i=1; i < s.size(); i++){
				// if the string is of a closing bracket
				if (symbols_match.count(s.substr(i, 1))){
					// and stack is empty it means there is a closing bracket before there was an opening bracket
					if (stack.size() == 0){
						return false;
					}
					// if stack isn't empty then we get the last element of stack
					last_bracket = stack.back();
					stack.pop_back();
					// if the opening bracket matches the closing bracket then we can continue as the bracket is popped and we go on
					if (last_bracket == symbols_match[s.substr(i, 1)]){
						continue;	
					} else {
						// if it doesn't match then return false as the bracket that was closed wasn't opened.
						return false;
					}
					
				}	
				stack.push_back(s.substr(i, 1));
			}
			return (stack.size() == 0);
		}
};


int main(){
	Solution sol;
	bool a;
	
	a = sol.isValid("[[[(])]]");
	cout << a << endl;
}

    
