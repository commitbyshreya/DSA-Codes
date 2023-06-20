#include <iostream>
using namespace std;

/* put all the zeros at the end */
int main()
{
    int arr[] = {0,5,0,3,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag;
   for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(arr[j]==arr[j+1]){
            continue;
        }
        else if(arr[j]==0 && arr[j+1]!=0){
            flag = true;
            swap(arr[i],arr[j]);
            
        }
    }
    if(flag == false) break;
   }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}