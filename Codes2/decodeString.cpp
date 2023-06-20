#include <iostream>
using namespace std;

string decodeString(string s){
    string result = ""; 
    int n = s.length();
    for(int i = 0;i<n;i++){

        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            string str ="";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();

            }
            reverse(str.begin(),str.end());
            result.pop_back(); //removing the openeing bracket 

            string num = "";
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(),num.end());
            int num1 = stoi(num);

            while(num1){
                result += str;
                num1--;
            }
        }
    }
    return result;
}
int main()
{
    string s= "1[a2[b3[c]]]";
    
    cout<<decodeString(s);
   return 0;
}