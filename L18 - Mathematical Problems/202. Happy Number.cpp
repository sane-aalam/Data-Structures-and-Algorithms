//Intuition
// When can see that we are repeating the same process until we reach either sum = 1 or end up in a cycle so we can conclude that recursion might help in this situation.
// Approach
// Use a combination of unordered map and recursion to solve this problem.

// Complexity
// Time complexity: O(n)
// Space complexity: O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int,int> mp;
    bool isHappy(int n) {
        long long nextNumber = 0;
        while(n){
            int digit = n % 10;
            nextNumber += digit * digit;
            n = n / 10;
        }
        // mark visited for this current Number, only 1 time aa raha hai
        // which means happy number hai
        // more than 1 times aa raha hai, which means stuck on the loop, reaption me fas gaya
        // then we need to call for same process(this newNumber)
        mp[nextNumber]++;
        if(nextNumber == 1){
            return true;
        }
        if(mp[nextNumber] > 1){
            return false;
        }
        return isHappy(nextNumber);
    }
};