#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
    {
        int peak;
       for(int i = 0; i < n;i++){
           for(int j = i + 1;j < n; j++){
               for(int k = j + 1; k < n; k++){
                   if(arr[j] > arr[i] && arr[j] > arr[k]){
                       peak = arr[j];
                       cout<<peak;
                   }
                   if(arr[k] == "" && arr[j] > arr[i]){
                    peak = arr[j];
                    cout<<peak;
                   }
               }
           }
       }
       return peak;
    }
int main()
{
    int arr[] = {2,1,2,4};
    int n = 4;
    peakElement(arr,n);

   return 0;
}