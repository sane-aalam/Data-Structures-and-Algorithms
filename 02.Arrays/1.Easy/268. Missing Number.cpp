class Solution {
public:
    int missingNumber(vector<int>& nums) {
        

        // approach - for(i,j) nested way
        // - hashmap
        // - math 
        // - ? bits

        // learn 
        // two Pointer 
        // reverse order 
        // hashmap
        // missing number
        // math 


 

        int sum = 0;
        int n = nums.size(); 

        for(int i = 0; i<n; i++){
            sum = sum + nums[i];
        }
        //  [3,0,1]
        // sum = 4;
        // sumone = 3 * (3 + 1) /2 =  6 
        // 6 - 4 = 2
        // ouotput = 2

        int sumOne = n * (n+1)/2;
        return sumOne - sum;
    }
};