#include <iostream>
#include <vector>
using namespace std;

/*Given an array in the non-decreasing order, return an array of sqaures 
of each number sorted in non-decreasing order*/

void sqaureOfEle(vector<int> &v){
    vector<int>ans;
    int left = 0, right = v.size() - 1;
    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ans.push_back(v[right]*v[right]);
            right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
            left++;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<"Expected output = ";
    for(int i = 0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sqaureOfEle(v);
    

   return 0;
}