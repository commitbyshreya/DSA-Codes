#include <iostream>
using namespace std;

int add(int a, int b) //formal parameters 
{
    int sum = a + b;
    return sum;
}
int main()
{
    cout<<add(2,4); //Actual Parameters 
   return 0;
}