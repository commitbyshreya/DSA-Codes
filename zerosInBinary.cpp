#include <iostream>
using namespace std;
/*Givven n natural numbers find their sum and print ans in binary*/
void toBinary(int n){
    int i = 0,count=0;int binnary[32];
    while(n>0){
        binnary[i]= n%2;
        n /= 2;
        i++;
    }
    cout<<"Binary representation: ";
    for(int j = i-1;j>=0;j--){
        cout<<binnary[j];
        if(binnary[j]==0){
            count++;
        }
    }cout<<"\n"<<"Total number of zeros: "<<count;
}
int main()
{
    int n,sum =0;
    cout<<"Enter number: ";
    cin>>n;
    // for(int i = 1;i<=n;i++){
    //     sum += i;
    // }
    toBinary(n);
   return 0;
}