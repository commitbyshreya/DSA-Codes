#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter rows and cols: ";
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    cout<<"Input for the array: "<<endl;
    for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

   return 0;
}