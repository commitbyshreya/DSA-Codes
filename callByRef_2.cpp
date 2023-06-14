#include <iostream>
using namespace std;

void findFirst_Last_Index(string s,char ch,int *f,int *l){
    for(int i =0;i<s.size();i++){
        if(ch==s[i]){
            *f = i;
            break;
        }
    }
    for(int i =s.size()-1;i>=0;i--){
        if(ch==s[i]){
            *l = i;
            break;
        }
    }
    
}
int main()
{
    string s = "aaabasua";
    char c = 'a';
    int f = -1;
    int l = -1;
    int *p1 = &f;
    int *p2 = &l;
    findFirst_Last_Index(s,c,p1,p2);
    cout<<f<<" "<<l;
   return 0;
}