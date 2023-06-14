#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int parity,p=1;

    while(n>0){
        int parity = n%2;
        sum += parity * p;
        p *= 10;
        n /= 2;

    }
    cout<<parity;
    
    return 0;
}