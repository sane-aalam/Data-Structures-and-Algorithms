
// s = "cdbcbbaaabab"
// x = 4, y = 5
// Naturally, we should always remove the higher scoring substring first — this is the greedy insight that drives the whole solution.

// First pass: remove "ab" (or "ba" if x < y was true and we reversed)
// Rebluid remaning string after pass 
// second pass: remove "ba" 
// why we are doing this,becaue we are greedy solving 
// which one greater x = 4, y=5 

// the maximum points you can gain after applying the above operations on s.
// to maximum points we have follow these steps
// value konsi zada hai x,y (greedy)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
    
        if(x < y){
            swap(x,y);
            reverse(s.begin(),s.end());
        }

        // First pass: remove "ab" (or "ba" if x < y was true and we reversed)
        int ans = 0;
        stack<char> st;

        for(auto ch : s){
            if(!st.empty() && st.top() == 'a' && ch == 'b'){
                st.pop();
                ans += x;
            }else{
                st.push(ch);
            }
        }
        // Rebluid remaning string after pass 
        string remaningString;
        while(!st.empty()){
            char topchar = st.top();
            remaningString += topchar;
            st.pop();
        }

        reverse(remaningString.begin(),remaningString.end());
        // second pass: remove "ba" 
        // stack is not empty && stack top b and current char = a
        // 'ba" then we need to removed, get value, which makes our ans maximum 
          for(auto ch : remaningString){
            if(!st.empty() && st.top() == 'b' && ch == 'a'){
                st.pop();
                ans += y;
            }else{
                st.push(ch);
            }
        }
        return ans;
    }
};




