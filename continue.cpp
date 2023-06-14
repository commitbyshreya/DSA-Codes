#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    // int n = 50;
    // int i = 1;
    // while(i<=n){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    //     i++;
    // }
    return 0;
}