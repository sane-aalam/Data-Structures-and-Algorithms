// basic: 
// iterate the array
// time complexity of algo - 0(n2)
// space complexity of algo - 0(1)

// Better : HashMap
// Find the Majority Element:
// HashMap<Integer, Integer> elementCounts = new HashMap<>()
// Map,UnordredMap,OrdredMap - which one best -> unordredmap (best) c++
// After iterating through the entire array and populating the HashMap, iterate through the entries (key-value pairs) in the HashMap.
// For each entry:
// Compare the count (value) with n/2.
// If the count of an element is greater than n/2, then that element is the majority element. Return it.
// time complexity of algo - 0(nlogn)
// space complexity of algo - 0(n) extra space we are using here 

// ----- MORE VOTTING ALGORITHM
// Optimization : Initialization:
// count = 0, candidate = None
// First Pass – Find Candidate:
// For each element:
// If count == 0, set candidate = element
// If element == candidate, increment count
// Else, decrement count
// Second Pass – Verify Candidate:
// Check if candidate occurs more than n/2 times.

// inorder to reduce the space complexity of the code
// we can use "MORE VOTING ALGORITHM"
// 1. declare the firstCandidate,With count = 1
// 2. if you got same vote,Then incease the count
// 3. if you not got same vote,Then decease the count 
// 4. repeat the process 


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityCandidate = 0;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
             if(count == 0){
                // reassign new candidate with new_value
                // count = 1
                 majorityCandidate = nums[i];
                 count = 1;
             }
             else if(majorityCandidate == nums[i]){
                count++;
             }else{
                count--;
             }
        }

        int majorityElementCount = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == majorityCandidate){
                majorityElementCount++;
            }
        }

        if(majorityElementCount > n/2){
            return majorityCandidate;
        }

        return -1;
    }
};