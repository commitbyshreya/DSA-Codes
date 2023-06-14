#include <iostream>
#include <vector>
using namespace std;

/*Given an array print q queries where you need to print sum of
values in given range of indices from l to r. 1 based indexing */


int main()
{
    int n; 
    cout<<"Enter the size of the vector: ";
    cin>>n;
    //taking input ele for vector
    cout<<"Enter vector elements: "<<endl;
    vector<int> v(n+1,0);//1 based indexing is needed. v = 1....n. And initialized by 0
    for(int i = 1;i<=n;i++){
        cin>>v[i]; //adding elements in the vector
    }
    for(int i = 1;i<=n;i++){
        v[i]+=v[i-1];
    }
    for(int el:v){
        cout<<el<<" ";
    }
    int q,ans = 0;
    cout<<"enter no. of queries: "<<endl;
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter l and r"<<endl;
        cin>>l>>r;
        //ans = prefixsum[r] - prefixsum[l-1]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}