class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right){
            cout << left << endl;
            int area = (right - left) * min(height[right], height[left]);
            if (area > max_area){
                max_area = area;
            }
            if (height[right] > height[left]){
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
