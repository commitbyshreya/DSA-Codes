
//Insertion sort 
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,10,8,3};
    int n = 5;
    for(int i = 1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}