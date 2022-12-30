// 26. Remove Duplicates from Sorted Array
#include<iostream>
#include<vector>

using namespace std;

class Solution{
	public:
		int removeDuplicates(vector<int>& nums){
			int unique_number = nums[0];
			int pointer = 1;
			
			for (int i = 1; i < nums.size(); i++){
				if (nums[i] != unique_number){
					unique_number = nums[i];
					nums[pointer] = nums[i];
					pointer++;
				}
			}
		return pointer;
		}
};


int main(){
	Solution sol;
	int result;
	vector<int> check_nums = {0};
	
	result = sol.removeDuplicates(check_nums);
	cout << result << endl;
	return 0;
}
