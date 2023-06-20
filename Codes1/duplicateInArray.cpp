#include <iostream>
using namespace std;
int main()
{
    //***********
    int array[] = {1,2,2,2,2};
    int n = 5;
    int duplicate = 0;
    for(int i = 0; i<5;i++){
        for(int j = i+1; j <5; j++){
            if(array[i]==array[j]){
                duplicate = array[i];
                cout<<duplicate<<" ";
            }
        }

    }
    
   return 0;
}