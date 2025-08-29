
// algorithm -
// pick current-sum, maximum-sum
// currsum += nums[i]
// currsum is gonna to maximum to maximum_sum, update the maximum_sum using current_sum
// currsum is gonna (-1) negative zero, then we need to decrease the time
// currsum is gonna if(currsum < 0) = reassign with help of currsum = 0;

// best-algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = 0;
        int maximumsum = INT_MIN;
        
        for(int index = 0; index <nums.size(); index++){
            currentsum = currentsum + nums[index];
            if(currentsum > maximumsum){
                maximumsum = currentsum;
            }
            // reassign with zero (again)
            if(currentsum < 0){
                currentsum = 0;
            }
        }
        return maximumsum;
    }
};