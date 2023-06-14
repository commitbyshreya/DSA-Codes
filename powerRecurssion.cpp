#include <iostream>
using namespace std;

// int f(int p, int q){
//     if(q==0) return 1;
//     return p * f(p,q-1);
// }

//optimisied solution 
int f(int p,int q){
    if(q==0) return 1;
    if(q%2==0) {
        int ans = f(p,q/2);
        return ans * ans;
    } 
    else{
        int an = f(p,(q-1)/2);
        return p * an * an;
    }
}
int main()
{
    int ans = f(2,4);
    cout<<ans;
   return 0;
}