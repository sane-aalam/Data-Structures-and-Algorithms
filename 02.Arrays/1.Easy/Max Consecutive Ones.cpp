class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // mock interview day-01 
        // explained and teached
        // clean code template
        int maxResult = 0;
        int currResult = 0;

        for(int currindex = 0;  currindex < nums.size(); currindex++){
            if(nums[currindex] == 1){
                currResult++;
                maxResult = max(currResult,maxResult);
            }else{
                currResult = 0;
            }
        }
        return maxResult;
    }
};