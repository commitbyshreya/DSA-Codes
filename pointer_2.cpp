#include <iostream>
using namespace std;
int main()
{
    // int x = 2;
    // double y = 2;
    // int *p = &x;
    // double *p1 = &y;
    // cout<<p<<" "<<(p+1)<<endl;
    // cout<<p1<<" "<<(p1-1)<<endl;

    int a[] = {3,4,5};
    int *pt = &a[0];
    
    // /* -> *pt++ will first dereference a[0] then it will point to
    // address of a[1], so */
    // cout<<*pt++<<endl; // ans -> 3
    // cout<<*pt<<endl; // ans -> 4 (after increment pt is pointing to a[1] so it will dereference it)

    // /* (*p)++ here first a[0] will be dereferenced then the value of 
    // a[0] will be updated by 1*/
    // cout<<(*pt)++<<endl; // ans -> 3
    // cout<<a[0]<<" "<<a[1]<<endl;// ans -> 4 4 
    
    // cout<<*++pt<<endl; //this will increment & then print value prefix operator
    // cout<<a[0]<<" "<<a[1]<<endl;

    cout<<++*pt<<endl; //this will update the value of a[0];
    cout<<a[0]<<" "<<a[1]<<endl;

   return 0;
}