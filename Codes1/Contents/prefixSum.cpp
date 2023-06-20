#include <iostream>
#include <vector>
using namespace std;

/*Given an integer array return the prefix sum/running sum
without creating a new array*/

void runningArray(vector<int> &v){
    for(int i = 1;i<v.size();i++){
        v[i] += v[i-1];
    }
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
    runningArray(v);
    //Printing the vector;
    for(int i =0; i <n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   return 0;
}