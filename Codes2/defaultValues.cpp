#include <iostream>
using namespace std;

void fun(int a, int b = 2, int c = 3){
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{
    fun(10,3); // 3 will be assigned to b and default c
   return 0;
}