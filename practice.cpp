#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int> &v, int l, int r){
   int sum1=0;
   for(int i=v[l];i<=v[r];i++){
      sum1 += v[i];
   }
   cout<<sum1;
}
int main()
{
   int n,l,r;
   cout<<"Enter length of array: ";
   cin>>n;
   cout<<"Enter left and right index: ";
   cin>>l>>r;
   vector <int> v(n);
   for(int i=0;i<n;i++){
      int ele;cin>>ele;
      v.push_back(ele);
   }
   sum(v,l,r);
   return 0;
}