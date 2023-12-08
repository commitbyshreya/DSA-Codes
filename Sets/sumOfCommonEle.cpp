#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    
    int n; cin>>n;
    vector <int> v1(n);
    cout<<"enter elemets of v1: ";
    for(int i = 0;i<n;i++){
        int ele; 
        cin>>ele;
        v1.push_back(ele);
    }
   
    int n1; cin>>n1;
    cout<<"enter elemets of v2: ";
    vector <int> v2(n1);
    for(int i = 0;i<n1;i++){
        int ele; 
        cin>>ele;
        v2.push_back(ele);
    }

    set <int> s1;
    for(auto ele: v1){
        s1.insert(ele);
    }
    int ans = 0;
    for(auto ele: v2){
        if(s1.find(ele)!=s1.end()){
            ans += ele;
        }
    }
    cout<<ans;
   return 0;
}