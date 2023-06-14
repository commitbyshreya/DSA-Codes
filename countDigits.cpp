#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//COUNT THE DIGITS
    // int num = 0;
    // while(n>0){
    //     num++;
    //     n = n/10;
        
    // }
    // cout<<num<<endl;

//ALTERNATE ADD AND SUBTRACT
       int sum = 0;
       for(int i = 1;i<=n;i++){
        if(i%2==0){
            sum -= i;
        }
        else{
            sum += i;
        }
       }
       cout<<sum;
    return 0;
}