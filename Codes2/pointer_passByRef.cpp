#include <iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
   cout<<x<<" "<<y<<endl;
   cout<<&x<<" "<<&y<<endl;
}
int main()
{
    int x = 20;
    int y = 60;
    // int *p1 = &x;
    // int *p2 = &y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
   return 0;
}