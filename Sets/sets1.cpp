#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> invite;
    int n ;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        invite.insert(name);
    }
    for(auto name: invite){
        cout<<name<<" ";
    }
   return 0;
}