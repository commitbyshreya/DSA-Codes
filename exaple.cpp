#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector <int> &v){
    for(int i = 1;i<v.size();i++){
        v[i] += v[i-1];
    }
    return;
}
int main()
{
     vector<int> v;
    cout<<"length: ";
    int s;cin>>s;
    cout<<"elements: ";
    for(int i = 0; i<s; i++ ){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    prefixSum(v);
    for(int i = 0;i<s;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
   return 0;
}