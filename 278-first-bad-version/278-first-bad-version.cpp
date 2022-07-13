// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//since the given array is sorted array, I will use binary search

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1; 
        int right = n;
        int middle;
        
        while(left <right){
            //middle = (left+right)2; 범위 오류남
            middle = left +(right-left)/2;
            if(isBadVersion(middle))
                right = middle;
            else
                left = middle+1;
            
        }
        return right;
    }
};