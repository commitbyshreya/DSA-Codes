#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number to find factorial:  ";
    cin>>a;
    int sum=1;
    for(;a>0;a--){
        sum *= a;
    }
    cout<<sum<<endl;
    // int n,r;
    // cout<<"Enter a number to print the multiplication table: ";
    // cin>>n;
    // cout<<"Enter the range: ";
    // cin>>r;
    // for(int i =1; i<r;i++){
    //     cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
    // }


    return 0;
}