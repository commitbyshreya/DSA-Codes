#include<iostream>
using namespace std;

int main(){
    // int n=5,sum=0,i=1;
    
    // do{
    //     sum += i;
    //     i++;
    //     cout<<sum<<endl;
    // }while (i<n);
    int n,sum=0;
    cin>>n;
    do{
        int num;
        cin>>num;
        sum += num;
        n--;
    }while(n>0);
    cout<<sum<<endl;


    return 0;
}