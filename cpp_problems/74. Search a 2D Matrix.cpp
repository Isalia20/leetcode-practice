class Solution {
private:
    bool binarySearch(vector<int>& matrix_row, int target){
        int left = 0;
        int right = matrix_row.size() - 1;
        // if row is length of 1
        if (matrix_row[0] == target){
            return true;
        }

        while (left <= right){
            int mid = (left + right) / 2;
            if (matrix_row[mid] == target){
                return true;
            } else if (matrix_row[mid] > target){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }


public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result;
        
        for (int j = 0; j < matrix.size(); j++){
            result = binarySearch(matrix[j], target);
            if (result){
                return result;
            }
        }
        return result;
    }
};
