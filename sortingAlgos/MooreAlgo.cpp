#include <iostream>
using namespace std;
/* TO find a number that appears more then n/2 time 
i.e ele > n/2; */
int majorityEle(int *arr,int n){
    int ele, count = 0, ctr = 0;
    for(int i =0;i<n;i++){
        if(count==0){
            ele = arr[i];
            count = 1;
        }
        else if(arr[i]==ele){
            count++;
        }
        else count--;
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==ele) ctr++;
    }
    if(ctr>(n/2)){
        return ele;
    }
    return -1;
}
int main()
{
    int arr[] = {2,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majorityEle(arr,n);
   return 0;
}