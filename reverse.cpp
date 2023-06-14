#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number to find the reverse: ";
    int n;
    cin>>n;
    int rev = 0;
    // while(n>0){
    //     rev = (rev*10) + n%10;
    //     n = n/10;
    // }
    // cout<<rev<<endl;
    for(;n>0;){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    cout<<rev<<endl;

    return 0;
}