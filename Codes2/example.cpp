#include <iostream>
using namespace std;

/* put all the zeros at the end */
int main()
{
    int arr[] = {0,0,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag;
   for(int i = 0;i<n-1;i++){
    for(int j = 0;j<n-1;j++){
        if(arr[j]==arr[j+1]){
            continue;
        }
        else if(arr[j]==0 && arr[j+1]!=0){
            flag = true;
           swap(arr[j],arr[j+1]);
        }
    }
    if(flag==false) break;
   }
    // int l = arr[0];
    // int i = 0;
    // while(i<n-1 && l<n-1){
    //     if(arr[l]==arr[l+1] ){ 
    //         l++; 
    //     }
    //     else if(arr[l]==0 && arr[l+1]!=0){
    //         // flag = true;
    //        swap(arr[l],arr[l+1]);
    //        l++;
    //     }
    //     i++;
    // }

    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}