
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    void insertAtBottomHelper(stack<int>& st, int elementX){
        
        // basecase: stack is gonna to empty 
        // which this is right time to push elementX into bottom 
        if(st.empty()){
            st.push(elementX);
            return;
        }

        int num = st.top();
        st.pop();

        insertAtBottomHelper(st,elementX);
        
        // backtack,take element which we have popped into stack 
        st.push(num);
    }
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        insertAtBottomHelper(st,x);
        return st;
    }
};