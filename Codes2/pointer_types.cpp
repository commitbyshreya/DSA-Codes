#include <iostream>
using namespace std;
int main()
{
    //wild pointer -> only pointer is declared not initialized.
    int *p;
    cout<<p<<endl;
    //null pointer -> pointer initialised by NULL
    int *p1 = NULL;
    int *p2 = 0;
    // int *p3 = '\0';
    cout<<" "<<p1<<" "<<p2<<" "<<"\n";
    //dangling pointer -> points to invalid address 
    int *dp = NULL;
    {
        int x = 10;
        dp = &x;
    }
    cout<<dp<<endl;
    //void pointer -> points to any datatype bucket
    int x1 = 10;
    float y = 22;
    void *v = &x1;
    int *in = (int*)v;
    v = &y;
    cout<<*in<<endl;
   return 0;
}