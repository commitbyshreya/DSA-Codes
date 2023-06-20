#include <iostream>
using namespace std;

/*- Write a program to print all Armstrong numbers between 100 to 500.
E.g.- 153 is an Armstrong number because (1*1*1)+(5*5*5)+(3*3*3)=153*/

bool armstrong(int n){
    int temp,r,sum=0;
    temp = n;
    while(n>0){
        r = n%10;
        sum += r*r*r;
        n = n/10;
    }
    if(sum==temp){return true;}
    else{return false;}
}
int main()
{
    cout<<"Armstrong numbers from 100 to 500 are: ";
   for(int i=100;i<=500;i++){
        if(armstrong(i)){
            cout<<i<<" ";
        }
    }
   return 0;
}

 // cout<<"Enter three digit number: ";
    // int n;
    // cin>>n;
    // int r,sum=0,temp;
    // temp = n;
    // while(n>0){
    //     r = n%10;
    //     sum += r*r*r;
    //     n = n/10;
    // }
    // if(sum==temp) {cout<<"armstrong number"<<endl;}
    // else {cout<<"not an armstrong number"<<endl;}