
class Solution {
public:    
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0; int right=n-1;

        vector<int> sorted(n);
        int pos = n-1;

        while(left<=right){ //-4,-1,0,3,10
            if(abs(nums[left])<abs(nums[right])){
                sorted[pos--] = pow(nums[right], 2); right--;
            }
            else { // 1 9 16 100
                sorted[pos--] = pow(nums[left], 2); left++;
            }
        }
        return sorted;
    }
};
