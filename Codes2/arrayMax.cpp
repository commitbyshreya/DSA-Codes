#include <iostream>
using namespace std;
int main()
{
    // int array[] = {1,3,77,9,0};
    cout<<"Enter 5 elements in the array"<<endl;
    int array[5];
    for (int i = 0; i < 5; i++){
        cin>>array[i];
    }
    
    int max = array[0];
    for(int i = 0; i < 5; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    cout<<"Max element is: "<<max;
   return 0;
}