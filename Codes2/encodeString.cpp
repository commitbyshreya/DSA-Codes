#include <iostream>
using namespace std;

string encodeString(string s ){
    string ans = "";
    int count = 1;
    for(int i = 0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            ans += s[i];
            ans += to_string(count);
            count = 1;
        }
    }
    return ans;
}
int main()
{
   string s = "aabbc";
   cout<<encodeString(s);
   return 0;
}