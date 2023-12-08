#include <iostream>
#include <stack>
using namespace std;
//1 . prec()
/*2. infixPostfix() -> 
    step 1: alphabets from  a to b
    step 2: opening ) and closing bracket (
    step 3: operators of higher prec pop 
    step 4: pop remaining operators from stack  */
int prec(char c ){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string res;

    for(int i = 0;i<s.length();i++){
        if(s[i]>= 'a' && s[i]<='z' || s[i]>= 'A' && s[i]<='Z'){
            res += s[i];
        }else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            if(st.top() == '('){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())> prec(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+= st.top();
        st.pop();
    }
    return res;

}
int main()
{
    cout<<"Enter a string: ";
    string s;
    cin>>s;

   string postfix = infixToPostfix(s);
   cout<<postfix;
   return 0;
}