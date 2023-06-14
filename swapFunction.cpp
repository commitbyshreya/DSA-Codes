#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 2;
    int c = 5;
    int &y = x;
    swap(x,c); //pass by reference
    cout<<x<<" "<<c;
   return 0;
}


// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x = 2;
//     int c = 5;
//     // int &y = x;
//     swap(x,c); //pass by value --makes a copy of it and hence numbers are not swapped
//     cout<<x<<" "<<c;
//    return 0;
// }

// void fun(int *x){
//     cout<<*x<<endl; //*x here is called as deference operator
// }
// int main(){
//     int a = 5;
//     fun(&a);

//     return 0;
// }