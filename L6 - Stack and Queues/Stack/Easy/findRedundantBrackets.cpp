#include <stack>
#include <iostream>
using namespace std;

bool findRedundantBrackets(string &s){
    // Write your code here.
    stack<char> stackContainer;
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            stackContainer.push(ch);
        }
        else{
            if (ch == ')'){
                bool isr = true;
                while (stackContainer.top() != '('){
                    char top = stackContainer.top();

                    if (top == '+' || top == '-' || top == '*' || top == '/'){
                        isr = false;
                    }
                    stackContainer.pop();
                }
                stackContainer.pop();
                if(isr){
                    return true;
                }
            }
        }
    }
    return false;
};

int main(){
    string s = "(a+c*b)+(c))";
    bool result =  findRedundantBrackets(s);
    cout << "output of problem :: " << result << endl;
    return 0;
}