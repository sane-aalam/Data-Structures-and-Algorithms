
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
   void DeleteNodeAtMiddle(stack<int>& st, int count, int totalsize){
        
        // base-case
        if(count == totalsize/2){
            int topElement = st.top();
            st.pop();
            return;
        }
        
        // take Element which is not middle element
        int num = st.top();
        st.pop();
        
        // call recursion for next
        DeleteNodeAtMiddle(st,count+1,totalsize);
        
        // back, push element which you have removed into top
        st.push(num);
   }
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
       // code here.
       // step by step (break-down problem statement)
       // Middle element:- floor((size_of_stack+1)/2) (1-based indexing) from the bottom of the stack.
       // we have to delete the element on the based of index value 
       // size/2 == count 
       // which means we can delete the middle index of stack
       
       int count = 0;
       int size = s.size();
       DeleteNodeAtMiddle(s,count,size);
    }
};