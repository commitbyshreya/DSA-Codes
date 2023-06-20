#include <iostream>
using namespace std;

int minimum(int a[],int b[], int n,int n1){
    int minA = INT_MAX;
    int minB = INT_MAX;
    for(int i = 0;i<n;i++){
        minA = min(minA,a[i]);
    }
    for(int i = 0;i<n1;i++){
        minB = min(minB,b[i]);
    }
    cout<<"mini from array1: "<<minA<<"\n"<<"mini from array2: "<<minB<<endl;
    return minA + minB;
}
int main()
{
    int a[] = {2,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int b[] = {4,5,6};
    int n1 = sizeof(b)/sizeof(b[0]);
    cout<<minimum(a,b,n,n1);
   return 0;
}