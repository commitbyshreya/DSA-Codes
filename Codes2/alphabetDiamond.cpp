#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            // char c1 = (char)(65 + j);
            // cout<<c1;
            cout<<j;
        }
        cout<<endl;
    }
    for(int i = n+1;i<= 2*n-1;i++){
        for(int j=1;j<=i-n;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*(2*n-i)-1;j++){
            // char ch = (char)(65 + j);
            // cout<<ch;
            cout<<j;
        }
        cout<<endl;

    }
 return 0;
}