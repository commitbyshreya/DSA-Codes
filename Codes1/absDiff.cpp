#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1,2,3,4,10};
    int n = 5;
    int i = 0, j = 1;
    bool flag = false;
    int x = 8;
    while(i < n and j < n){
        if(abs(arr1[i] - arr1[j])==x){
             flag = true;break;
        }
        else if(abs(arr1[i] - arr1[j]) < x){
            j++;
        }
        else{
            i++;
        }
    }
    if(flag==true){cout<<"Yes";}
    else{cout<<"No";}
   return 0;
}