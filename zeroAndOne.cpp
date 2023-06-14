#include <iostream>
#include <vector>
using namespace std;

void zeroAndOne(vector <int> &v){
    int lptr = 0;
    int rptr = v.size()-1;
    while(lptr<rptr){
        if(v[lptr]==1 && v[rptr]==0){
            v[lptr++] = 0; v[rptr--]=1;
            
        }
        if(v[lptr]==0){
            lptr++;
        }
        if(v[rptr]==1){
            rptr--;
        }

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

    zeroAndOne(v);
    for(int i = 0;i<s;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
   return 0;
}