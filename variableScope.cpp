#include <iostream>
using namespace std;

int a = 5; //global variable
int main()
{
    int a = 2; //local variable
    cout<<a<<endl; //accesing local variable
    cout<<::a; //accessing global variable using scope resolution operator

   return 0;
}