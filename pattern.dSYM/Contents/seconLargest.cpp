#include <iostream>
using namespace std; 



int secondLargestIndex(int array[], int size){
    int max = INT_MIN;
    int secondmax = INT_MIN;
    for(int i = 0; i<size; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    for(int i = 0; i<size; i++){
        if(array[i]>secondmax && array[i]!=max){
            secondmax = array[i];
        }
    }
    return secondmax;
}
int main()
{
    int array[] = {1,-2,-99,1,8};
    int n = 5;
    
    cout<<secondLargestIndex(array,n)<<endl;
   return 0;
}


//**SOLUTION 2 -- NOT EFFICIENT//
//FIND THE SECOND LARGEST ELEMENT IN THE GIVEN ARRAY

// int largestIndex(int array[], int size){
//     int max = INT_MIN;
//     int maxIndex = -1;
//     for(int i = 0; i<size;i++){
//         if(array[i] > max){
//             max = array[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// } --With this solution you have to traverse the array thrice
// int main()
// {
//     int array[] = {1,2,99,99,8};
//     int n = 5;
//     // int firstLargestEle = secondLargestIndex(array,5);
//     // // array[firstLargestEle] = -1;
//     // // int largest = array[firstLargestEle];
//     // // for(int i = 0;i<5;i++){
//     // //     if(array[i]==largest){
//     // //         array[i]= -1;
//     // //     }
//     // // }  --This is to check if we have repetation in the input
//     // int secondLargestEle = secondLargestIndex(array,5);
//     // cout<<array[secondLargestEle];

    
//    return 0;
// }