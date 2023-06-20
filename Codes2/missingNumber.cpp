#include <iostream>
using namespace std;
int main()
{
    int arr[] = {102,103,101,104,106};
    int s = sizeof(arr)/sizeof(arr[0]);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0;i<s;i++){
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }
    int sum = 0;
    for(int i = mini;i<=maxi;i++){
        sum += i;
    }
    int sum1 = 0;
    for(int i = 0;i<s;i++){
        sum1 += arr[i];
    }
    cout<<"missing number: "<<sum-sum1;
   return 0;
}