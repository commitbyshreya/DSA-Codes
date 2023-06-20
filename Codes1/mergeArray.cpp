#include <iostream>
#include <vector>
using namespace std;
/*Given an array with sorted integers merge them.
The resultant array should also be in increasin order*/
void mergeArray(vector<int>&v1,vector<int>&v2,int n1, int n2,vector<int>&v3){
    int k = 0,i=0,j=0;
        while(i < n1 and j < n2){
            if(v1[i]<v2[j]){
                v3[k++] = v1[i++];
            }
            else{
                v3[k++] = v2[j++];
            }
        }
        while(i < n1){
            /*if v2 is exhausted and v1 elements remain 
            then add the v1 elements without comparing*/
            v3[k++] = v1[i++];
        }
        while(j < n2){
            /*if v1 is exhausted and v2 elements remain 
            then add the v2 elements without comparing*/
            v3[k++] = v2[j++];
        }
}
int main()
{
    vector<int> v1;
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i<n;i++){
        int ele; cin>>ele;
        v1.push_back(ele);
    }
    vector<int> v2;
    cout<<"Enter size of the array: ";
    int n2;
    cin>>n2;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i<n2;i++){
        int ele; cin>>ele;
        v2.push_back(ele);
    }
    vector<int> v3(n + n2);
    mergeArray(v1,v2,n,n2,v3);
    cout<<"Merged Array: ";
    for(int i = 0;i<n+n2;i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
   return 0;
}