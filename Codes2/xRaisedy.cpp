#include<iostream>
using namespace std;

int main(){
    int x,y,i=1,sum=1;
    cout<<"Enter number: ";
    cin>>x;
    cout<<"Enter number raised to number(2^5): ";
    cin>>y;
    while(i <= y){
        sum = sum * x;
        i++;
        cout<<sum<<" ";

    }
    return 0;
}