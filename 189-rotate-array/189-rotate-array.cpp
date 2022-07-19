//1[0],2,3,4,5,6[5],7[6]
            //7,1,2,3,4,5,6[6]
            //6,7,1,2,3,4,5
            //5,6[1],7[2],1[3],2,3,4
            //0-> 3, 6->2, k=3
            //0+3 %7 = 3, 6+3=9%7= 2, 5->1 5+3=8%7=1
            //0,1,2,3,4,5,nums.size()-1
            //nums[i]-> nums[i+1]
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result(nums.size()); //배열 생성시 사이즈 지정을 안해줘서 오류 남
        for(int i=0; i<nums.size(); i++){ //0-6
            result[(i+k)%nums.size()] = nums[i]; //
        }
        
        for(int i=0; i<nums.size(); i++){
            nums[i]= result[i];
            
        }
        
        
    }
};