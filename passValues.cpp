#include <iostream>
using namespace std;

void show(int &b){
    b = 10;
    cout<<b<<endl;
}
int main()
{   int c = 89;
    int b = 120;
    show(b);
    show(c);
    cout<<b<<endl;
    cout<<c;
   return 0;
}