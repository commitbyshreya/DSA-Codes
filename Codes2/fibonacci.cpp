#include <iostream>
using namespace std;

int main(){
    //fibonacci series is addition of previous two numbers
   int num;
   cout<<"Enter max number: ";
   cin>>num;
   int x=0;
   int y =1;
   int z= x+y;
   while(z<=num){
    cout<<z<<" ";
    x = y;
    y = z;
    z = x + y;
   }

    return 0;
}