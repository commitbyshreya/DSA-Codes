#include <iostream>
using namespace std;

bool sortedFlag = true;

void flag(bool){
    if(sortedFlag==true){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}
int sortedOrNOt(int array[]){
    int len = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i< len; i++){
        if(array[i]<= array[i-1]){
            sortedFlag = false;
        }
    }
    flag(sortedFlag);

    return sortedFlag;
}
int main()
{
    int array[4];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < 4; i++){
        cin>>array[i];
    }
    cout<<"array[] = ";
    for(int element:array){
        cout<<element<<" ";
    }
    cout<<endl;
    sortedOrNOt(array);
   
   return 0;
}


 // int array[] = {1,77,84,8};
    // int len = end(array) - begin(array);
    // bool sortedFlag = true;
    
    // for(int i = 0; i< len; i++){
    //     if(array[i]<= array[i-1]){
    //         sortedFlag = false;
    //     }
    // }
    // cout<<sortedFlag;
           