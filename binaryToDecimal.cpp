#include <iostream>
#include <cmath>
using namespace std;

/*Given two binary numbers return greatest of them in decimal format*/

void bin_to_dec(int n,int n2){
    int rem,dec=0,i=0;
    int rem2,dec2=0,j=0;
    while(n>0){
        rem = n%10;
        dec += rem * pow(2,i);
        n /= 10;
        i++;
    }
    while(n2>0){
        rem2 = n2%10;
        dec2 += rem2 * pow(2,j);
        n2 /= 10;
        j++;
    }cout<<dec<<" "<<dec2<<endl;
    if(dec>dec2){
        cout<<dec<<" is greater";
    }
    else {cout<<dec2<<" is greater";}
}
int main(){
    int n,n2;
    cout<<"Enter num1: ";
    cin>>n;
    cout<<"Enter num2: ";
    cin>>n2;
    bin_to_dec(n,n2);
    return 0;
}