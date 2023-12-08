#include <iostream>
using namespace std;

/* DNS - Dutch National Flag algo 
    rule 1 -> (0...low-1) = 0
    rule 2 -> (low...mid-1) = 1
    rule 3 -> (mid..high) = unsorted array
    rule 4 -> (high+1..n-1) = 2*/

void sort012(int *arr, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0) {
            swap(arr[mid],arr[low]);
            low++; mid++;
        }
        else if(arr[mid]==1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {2,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
   return 0;
}