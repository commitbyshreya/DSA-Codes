// 1. Find max element
// 2. Calculate freq in new array
// 3. Calculate cumulative freq in new array 
// 4. create ans array -> tranverse original array from n-1 and store value in ans array , by reucing freq of new array 
//Count sort
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5,4,2,1,2};
    int n = 5;
    int maxele = INT_MIN;
    //1. Find max element
    for(int i = 0;i<n;i++){
        if(arr[i]>maxele){
            maxele = arr[i];
        }
    }
    //2. Freq array -> calculate freq of each element 
    int freq[maxele+1];
    for(int i = 0 ; i<n; i++){
        freq[arr[i]]++; 
    } 
    // 3. Freq -> calculate cumulative freq
    for(int i = 1; i<=maxele;i++){
        freq[i] += freq[i-1];
    }
    // 4. Ans array -> stored sorted aray
    int ans[n];
    for(int i = n-1;i>=0;i--){
        ans[--freq[arr[i]]] = arr[i];
    }
    //5. copy back to main array and print
    for(int i = 0;i<n;i++){
        arr[i] = ans[i];
        cout<<arr[i]<<" ";
    }
   return 0;
}