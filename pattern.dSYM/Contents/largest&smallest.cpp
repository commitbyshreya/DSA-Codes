#include <iostream>
using namespace std;
int main()
{
    int array[] = {-1,-3,-7,-5,-1};
    int n = 5;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
        else if(array[i]<min){
            min = array[i];
        }
    }
    cout<<"The largest element is: "<<max<<endl;
    cout<<"The smallest element is: "<<min<<endl;
   return 0;
}