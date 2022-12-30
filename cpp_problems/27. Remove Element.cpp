#include <iostream>
#include <vector>

using namespace std;


//void printVector(vector<int> vector_to_print){
//	for (int i=0; i < vector_to_print.size(); i++){
//		cout << vector_to_print[i] << " ";
//	}
//}


class Solution{
	public:
		int removeElement(vector<int>& nums, int val){
			int pointer_one = 0; 
			int pointer_two = 0;
			int counter = 0;
			
			while (pointer_one < nums.size()){
				if (nums[pointer_one] != val){
					pointer_one++;
					pointer_two = pointer_one;
					counter++;
				} else {
					while (pointer_two < nums.size()){
						if (nums[pointer_two] != val){
							nums[pointer_one] = nums[pointer_two];
							nums[pointer_two] = val;
							pointer_one++;
							pointer_two = pointer_one;
							counter++;
							break;
						}
						pointer_two++;
					}
					if (pointer_two == nums.size()){
						pointer_one++;
					}
				}
			}
			return counter;
		}
};

int main(){
	Solution sol;
	vector<int> sample_nums={3, 3};
	int sample_val = 3;
	int result;
	
	result = sol.removeElement(sample_nums, sample_val);
	cout << result;
	return result;
}
