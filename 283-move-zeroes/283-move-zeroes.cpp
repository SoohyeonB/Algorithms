//you must do this in-place without making a copy of the array.
//1. 모든 0을 뒤로 보냄
//2. 0을 제외한 나머지 숫자를 오름차순으로 배열

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        for(int i=0; i<nums.size(); i++){  //0 1 0 3 12
            if(nums[i]!=0){//i=1
                nums[lastNonZeroFoundAt++] = nums[i];
            }
        }
        
        for(int i=lastNonZeroFoundAt; i<nums.size(); i++)
            nums[i]=0;
    }
};