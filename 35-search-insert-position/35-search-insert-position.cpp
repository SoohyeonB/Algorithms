//since the time complexity is logN and an given array is ordered, binary search can be a great choice


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        if(target < nums[left]) return left;
        else if(target >nums[right]) return right+1;
        while(left<right){
            int mid =(left+right)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                left=mid+1;
            else
                right=mid;
        }
        return right;
    }
};