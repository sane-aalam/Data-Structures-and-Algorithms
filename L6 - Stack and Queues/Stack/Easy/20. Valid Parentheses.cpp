#include <bits/stdc++.h>
using namespace std;

// Stack base problem
// if current char is open bracket hai, Then simply push into the stack
// if current char is closing bracket hai, Then you need checkout the mataching of open bracket
// if(s[index] == '(') and if(s[index] == '{' and s[index] == '[') push into the stack
// otherwise popped the check out the condition 

// 99% quesions which have these type bracket solve using stack

class Solution {
public:
    bool isValid(string s) {
        int sizestr = s.size();
        stack<char> st;

        for(int currindex = 0; currindex < sizestr; currindex++){
            char currchar = s[currindex];
            if(currchar == '(' || currchar == '{' || currchar == '['){
                st.push(currchar);
            }else if(currchar == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }else if(currchar == '}'){
                  if(!st.empty() && st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }

            }else if(currchar == ']'){
                 if(!st.empty() && st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        // end of forlop 
        if(st.size() == 0){
            return true;
        }
        return false;
    }
};