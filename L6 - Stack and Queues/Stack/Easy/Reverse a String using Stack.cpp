
#include <bits/stdc++.h>
using namespace std;

// 1. with using Stack (LIFO)
string reverseStringStack(string& s) {
     // code here
    stack<char> st;
        
    for(int index = 0; index < s.size(); index++){
            st.push(s[index]);
    }
        
    string str = "";
    while(!st.empty()){
        char topElement = st.top();
            st.pop();
            str = str + topElement;
        }
    return str;
}

// 2. With Using STL Reverse Method
string reverseStringWithSTL(string& s){
    string str = s;
    reverse(str.begin(),str.end());
    return str;
}

// 3. Without Using STL Reverse Method
string reverseStringWithoutSTL(string str) {
  int left = 0;
  int right = str.length() - 1;
  while (left < right) {
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    left++;
    right--;
  }
  return str;
}

int main(){
    cout << "--------------------------------------------------" << endl;

    string inputString = "ExclusiveOperation";
    cout << "input string print :: " << inputString << endl;
    string reverseString = reverseStringStack(inputString);
    cout << "reverse string print :: " << reverseString << endl;
    cout << endl;
    cout << "massage:success" << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;
}