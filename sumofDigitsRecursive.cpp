#include <iostream>
using namespace std;

int f(int n){
    if(n>=0 and n<=9) return n;
    return f(n/10) + f(n%10);
}
int main()
{
    int a = f(1234);
    cout<<a;
    return 0;
}