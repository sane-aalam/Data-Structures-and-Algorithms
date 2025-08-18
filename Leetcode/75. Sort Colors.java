import java.util.Arrays;

// This problem is also known as the "Dutch National Flag Problem
// first need to solve sort(0,1)
// simple Two pointer,try to think to use three pointer to solve this problem 

class Solution {
    public void sortColors(int[] nums) {

        int startindex = 0;
        int middleindex = 0;

        int endindex = nums.length - 1;

        while(middleindex <= endindex){
            if(nums[middleindex] == 0){
                int temp = nums[startindex];
                nums[startindex] = nums[middleindex];
                nums[middleindex] = temp;
                startindex++;
                middleindex++;
            }else if(nums[middleindex] == 1){
                middleindex++;
            }else if(nums[middleindex] == 2){
                int temp = nums[endindex];
                nums[endindex] = nums[middleindex];
                nums[middleindex] = temp;
                endindex--;
            }
        }
    }
}

   // Main method 
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {2, 0, 2, 1, 1, 0};
        
        System.out.println("Before sorting: " + Arrays.toString(nums));
        sol.sortColors(nums);
        System.out.println("After sorting: " + Arrays.toString(nums));
    }
}