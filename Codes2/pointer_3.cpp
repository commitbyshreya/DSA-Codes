#include <iostream>
using namespace std;

void process(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
}
int main()
{
    int a[] = {1,2,3};
    int n = 3;
    // int *p = a[0];
    // cout<<a<<" "<<*p<<endl; // here a points the the bucket addr of a[0] th element just like the pointer
    process(a,n);
    
   return 0;
}