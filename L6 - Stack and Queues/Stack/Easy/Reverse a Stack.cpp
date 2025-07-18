#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void helper(stack<int> &st,int num){
        if(st.size()==0){
            st.push(num);
        }else{
            int a=st.top();
            st.pop();
            helper(st,num);
            st.push(a);
        }
    }
    void Reverse(stack<int> &st){
        if(st.size()==0){
            return ;
        }
        int num =st.top();
        st.pop();
        Reverse(st);
        helper(st,num);
    }
};