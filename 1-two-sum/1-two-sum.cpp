


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        cout<<"nums size: " << nums.size() <<endl;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<=nums.size()-1; j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        
        return result;
    }
};