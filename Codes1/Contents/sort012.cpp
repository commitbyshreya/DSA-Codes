#include <iostream>
using namespace std;
void sort012(int a[], int n)
    {
        int i=0,zero =0, ones = 0, twos = 0;
        for(int i = 0;i<n;i++){
            if(a[i]==0){
                zero++;
            }
            else if(a[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        }
        while(zero>0){
            a[i++] = 0;
            zero--;
        }
        while(ones>0){
            a[i++] = 1;
            ones--;
        }
        while(twos>0){
            a[i++] = 2;
            twos--;
        }
    }
    
int main(){
    int a []= {2,2,1,0,0};
    int n = 5;
    sort012(a,n);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}