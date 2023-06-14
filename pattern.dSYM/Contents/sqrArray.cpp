#include <iostream>
using namespace std;

/* Given sorted array return sqaures of each number*/
void sqrArray(int arr[], int n){
     int result[n];
  int i = 0, j = n-1, k = n-1;
  while(i <= j and k >= 0){
    if(abs(arr[i] ) > abs(arr[j])){
        result[k] = arr[i]*arr[i];
        i++;k--;
    }
    else{
        result[k] = arr[j]*arr[j];
        j--;k--;
    }
    for(int i = 0;i < n;i++){
    cout<<result[k]<<" ";
  }
 }
}
int main()
{
  int arr[] = {-9,2,3,4,5};
  int n = 5;
  sqrArray(arr,n);
  return 0;
}