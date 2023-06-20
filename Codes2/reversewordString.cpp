#include <iostream>
using namespace std;

string reverseWords(string s){
    int i = 0;
    int n = s.size(); string ans = "";
    while(i<n){
        string temp = "";
        while(s[i]==' ' && i<n)
            i++;
        
        while(s[i]!=' ' && i<n){
            temp += s[i];
            i++;
        }
        if(ans.size()==0){
            ans = temp;
        }
        else{
            ans = temp + " " + ans;
        }
    }
    return ans;
}
int main()
{
    cout<<"enter a string to reverse it: ";
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
   return 0;
}