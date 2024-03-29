// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1;
        long right = n;
        bool isBad;
        while (left <= right){
            long mid = (left + right) / 2;
            isBad = isBadVersion(mid);
            if (isBad){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return right + 1;
    }
};

