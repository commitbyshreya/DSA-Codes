#include <iostream>
using namespace std;
int main()
{
    /* in insertion sort time complexity in worst case is O(N^2)
    but in best case it is (n) 
    Also if there are few unsorted/almost sorted array the insertion
    works better then selection sort
    ## Insertion is STABLE SORT i.e it doesn't disturb the order of elements
    eg: [3, 4, 3*, 2] ->> [2, 3, 3*, 4]*/
    int arr[] = {2,6,8,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1;i<n;i++){
       int current = arr[i];
       int j = i-1;
       while(j>=0 && arr[j]>current){
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = current;
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}