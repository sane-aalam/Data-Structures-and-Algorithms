/*
QUESTION:-
Given an array Arr of size N, print second largest distinct element from an array.

Example:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
*/

/*
APPROACH
-> If the current element is larger than ‘large’ then update second_large and large variables
-> Else if the current element is larger than ‘second_large’ then we update the variable second_large.
-> Once we traverse the entire array, we would find the second largest element in the variable second_large.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int firstLargestNumber = INT_MAX;;
        int secondLargestNumber = INT_MAX;;

        if(nums.size()<2){
            return -1;
        }

        int sizeNums = nums.size();

        for(int currindex = 0; currindex < sizeNums; currindex++){
            if(nums[currindex] > firstLargestNumber){
                // assign firstLargestNumber to secondLargestNumber
                // maximum_value assign to firstLargestNumber
                secondLargestNumber = firstLargestNumber;
                firstLargestNumber = nums[currindex];
            }else if(nums[currindex] != firstLargestNumber && secondLargestNumber > nums[currindex]){
                secondLargestNumber = nums[currindex];
            }
        }
        
        if(secondLargestNumber != INT_MAX){
            return secondLargestNumber;
        }
        return -1;
    }
};