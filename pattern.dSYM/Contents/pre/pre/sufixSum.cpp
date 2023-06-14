#include <iostream>
#include <vector>
using namespace std;

/*Check if we can partition the array into two subarrays with equal
sum. Check if prefix sum = sufix sum */

bool SumArray(vector<int> &v){
    int total = 0;
    for(int i = 0;i<v.size();i++){
        total += v[i];
    }
    int prefix = 0;
    for(int i = 0;i<v.size();i++){
        prefix += v[i];
        int sufix = total - prefix;
        if(prefix==sufix){
            return true;
        }
    }
    return false;
    

}
int main()
{
    int n; 
    cout<<"Enter the size of the vector: ";
    cin>>n;
    //taking input ele for vector
    cout<<"Enter vector elements: "<<endl;
    vector<int> v;
    for(int i = 0;i< n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele); //adding elements in the vector
    }
    cout<<SumArray(v)<<endl;
    //Printing the vector;
    // for(int i =0; i <n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
   return 0;
}