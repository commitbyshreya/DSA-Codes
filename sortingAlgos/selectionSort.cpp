#include <iostream>
using namespace std;
int main()
{
    /*  ** maximum no. of swaps in selection sort will be O(N) 
     where as in buble sort & other algos it is O(N^2)
    */
    int arr[] = {2,6,8,4,10};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            // int min_idx = i;
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}