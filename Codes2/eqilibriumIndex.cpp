#include <iostream>
using namespace std;

int eqilibriumIndex(int arr[],int n){
    if(n==1){
        return n;
    }else if (n==2)
    {
        return -1;
    }
    int sum = 0;
    int leftsum = 0,rightsum = 0;
    for(int i = 1;i<n;i++){
        sum = arr[i] += arr[i-1];
    }
    for(int i = 1;i<n-1;i++){
        if(sum==0){
            return 0;
            break;
        }
        leftsum = arr[i-1];
        rightsum = arr[n-1] - arr[i];
        if(leftsum==rightsum){
            return i;
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<eqilibriumIndex(arr,n);
   return 0;
}