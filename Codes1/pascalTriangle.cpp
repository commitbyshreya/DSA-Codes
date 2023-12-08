#include <iostream>
using namespace std;
/* PASCAL TRIANGLE
 Q1 Row no -> n and column no -> r will be given */

// int func(int n, int r){
//    /*
//    BRUTE FORCE SOL
//    int fact=1; int fact2=1, fact3=1;
//    for(int i = 1;i<=n;i++){
//       fact *= i;
//    }
//    for(int i = 1;i<=r;i++){
//       fact2 *= i;
//    }
//    for(int i =1; i <= n-r;i++ ){
//       fact3 *= i;
//    }
//    return fact/(fact2*fact3);*/
//    int ans=1;
//    for(int i = 0;i<r;i++){
//       ans = ans * (n-i);
//       ans = ans/ (i+1);
//    }
//    return ans;
// }
// int main()
// {
//    int n = 5, r = 2;
//    cout<<func(n-1,r-1);
//    return 0;
// }

/* Q2 print the given row or entire tri*/
void NCR ( int n){
   int ans = 1;
   cout<<ans<<" ";
   for(int i = 1;i<n;i++){
      ans = ans * (n-i);
      ans = ans/i;
      cout<<ans<<" ";
   }
   cout<<endl;
}
int main(){
   int n = 6;
   for(int i = 1;i<=n;i++){
      NCR(i);
   }
  
}