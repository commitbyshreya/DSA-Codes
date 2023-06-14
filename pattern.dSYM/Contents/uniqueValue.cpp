#include <iostream>
using namespace std;
int main()
{
    /*___ARRAY MANIPULATION___ 
    find the unique number in  the given array where all the elements
    are being repeated twice with one value being unique
    */


    int arr[7] = {1,2,3,4,2,1,3};
    // int uni = 0;
    for(int i = 0; i < 7; i++){
        for(int j = (i+1); j < 7; j++){
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        if(arr[i]>0){
            cout<<arr[i];
        }
    }
   return 0;
}