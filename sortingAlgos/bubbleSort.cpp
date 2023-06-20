#include <iostream>
using namespace std;
int main()
{
    int arr[] = {20,50,40,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag) break;// if you have a nearly sorted array 
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}