#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution{
	public:
		string longestCommonPrefix(vector<string>& strs){
			string common_prefix = strs[0];
			string string_iter_1;
			string string_iter_2;
			
			for (int i=1; i < strs.size(); i++){
				// which one is the smaller string
				if (strs[i].size() > common_prefix.size()){
					string_iter_1 = common_prefix;
					string_iter_2 = strs[i];
				}
				else {
					string_iter_1 = strs[i];
					string_iter_2 = common_prefix;
				}
				// which one is the bigger string
				for (int j=0; j <= string_iter_1.size(); j++){
					if (string_iter_1[j] == string_iter_2[j]){
						continue;
					} else {
						common_prefix = string_iter_1.substr(0, j);
						break;
					}
				}
			}
			return common_prefix;
		}
	};


int main(){
	string longest_prefix;
	Solution sol;
	vector<string> sample_vector={"b", "bla"};
	
	longest_prefix = sol.longestCommonPrefix(sample_vector);
	cout << longest_prefix << endl;
}
