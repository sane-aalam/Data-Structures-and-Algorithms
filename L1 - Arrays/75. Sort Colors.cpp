
// ❌ The logic to count the number of 0s, 1s, and 2s is correct
// ❌ Bruthforce approach - Sorting Algorithm used 
// ❌ Better Approach - used DNC Algorihtm 
// we have to think 
// [starting position of array -] - [0,0,0]
// [middle position of array   -] - [1,1,1]
// [end position of array      -] - [2,2,2]
// we need three pointer variable to update the, the colors in the order red, white, and blue.
// we need to understand the working of SWAPINNING WITH CORRECT POSITION OF ELEMENTS
// THINK FIRST ARRAY SORT(0,1) PROBLEM STATEMENT INTO GFG

// Date: 19,june,2025
// Low-Level-Thinking
// Recap - Approach to problem solving
// STEP1: We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively
// STEP2: we will arrange all 0's into start indexes of array
// STEP3: we will arrange all 1's into middle indexes of array [middle-part of array]
// STEP4: we will arrange all 2's into end indexes of the array [end-part of array]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int startindex = 0;
        int middleindex = 0;
        int endindex = nums.size()- 1;

        while(middleindex <= endindex){
            if(nums[middleindex] == 0){
                swap(nums[startindex],nums[middleindex]);
                startindex++;
                middleindex++;
            }else if(nums[middleindex] == 1){
                middleindex++;
            }else if(nums[middleindex] == 2){
                swap(nums[middleindex], nums[endindex]);
                endindex--;
            }
        }
        // void method no need to return
    }
};












