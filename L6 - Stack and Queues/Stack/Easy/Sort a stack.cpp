

// Approach to Sort a Stack Using Recursion
// 1️⃣ Pop the top element
// 2️⃣ Recursively sort the remaining stack
// 3️⃣ Insert the popped element back in sorted order using a helper function
// 4️⃣ No extra stack used just recursion 

#include <bits/stdc++.h>
using namespace std;

class SortedStack{
public:
    stack<int> s;
    void sort();
};

void sortedinsert(stack<int>& s, int x){
       if(s.empty() || x > s.top()){
           s.push(x);
           return;
       }
       
       int temp = s.top();
       s.pop();
       sortedinsert(s, x);
       
       s.push(temp);
   }

void SortedStack ::sort() {
    // Your code here
    if(!s.empty()){
        int x = s.top();
        s.pop();
        sort();
        
        sortedinsert(s, x);
    }
    
}
