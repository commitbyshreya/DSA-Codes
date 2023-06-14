#include <iostream>
using namespace std;
int prime(int num){
    int i,flag;
    for(i=2;i<num;i++){
        if(num%i!=0){
        flag=1;
        }
        else{
        flag=0;break;
        }
    }
    if(flag==1 || num==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;cin>>n;
    int num=2;
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            while(!prime(num)){
                num++;
            } cout<<num<<" ";num++; 
        }cout<<endl;
    }
   return 0;
}