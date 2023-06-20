#include <iostream>
using namespace std;
int main()
{
    // int x = 10;
    // float y = 4.4;
    // //if int address to be stored used same data type int 
    // int *ptr = &x;//referencing / initialization
    // //you can't put float address in int type pointer
    // float *ptrf = &y;
    
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;/*ptr -> is deferencing to get the value stored 
    // at the ptr address*/
    // cout<<ptrf<<endl;
    // cout<<*ptrf<<endl;

    // //update value of x using *ptr
    // *ptr = 50;
    // cout<<*ptr<<endl;

    //---------------------
    //adding numbers using pointer address by dereferencing
    int a,b;
    cin>>a>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int add = *ptr1 + *ptr2;
    cout<<add<<endl;
    cout<<"adress of ptr1 itself: "<<&ptr1<<endl; //prints the address of ptr1 bucket not the adress stored in ptr 
   return 0;
}