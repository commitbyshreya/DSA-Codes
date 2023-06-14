#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {19,22,3,4,5};
    // int length = end(arr)-begin(arr);
    // cout<<sizeof(arr)<<endl;
    // arr[3] = 88;
    // cout<<arr[3]<<endl;
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl; //to find the length of the array 
    // cout<<end(arr)-begin(arr)<<endl; //length of the array

    //FOR LOOP
//     for(int i = 0; i<length;i++) //accessing all the elements of array
//     { 
//         cout<<arr[i]<<" ";
//     }
//    return 0;

    //FOR EACH LOOP
    // for(int element:arr){
    //     cout<<element<<" ";
    // }

    //WHILE LOOP
    // int i =0;
    // while(i < length){
    //     cout<<arr[i]<<" ";
    //     i++;
    // }

    //array input
    char vowels[5];
    // for(int i = 0; i < 5; i++){
    //     cin>>vowels[i];
    // }
    for(char &ele:vowels ){
            cin>>ele;
    }
    for(int i = 0; i < 5; i++){
        cout<<vowels[i]<<" ";
    }

    return 0;
   
}