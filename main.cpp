#include <iostream>
using namespace std;

int main(){
    // //MISCLANIOUS OPERATORS
    // //size operator
    // int a = 5;
    // cout<<sizeof(a)<<endl;
    // char n = 's';
    // cout<<sizeof(n)<<endl;
    // bool flag;
    // //conditional operator
    // a == n? flag =true: flag = false; 
    // cout<<flag;
    // //& operator - memory address
    // cout<<(&a)<<endl;

    //UNIRAY OPERATORS - USED ON A SINGLE OPERAND
    // int c = 4;
    // cout<<(++c)<<endl;
    // cout<<(c++)<<endl;
    // int d = 4;
    // cout<<(--c)<<endl;

    // int a = 2, b = 8, c = 16;
    // cout<<(a*b)+(c-b)/a<<endl;

    bool p = true;
    bool q = false;
    bool r = true;
    cout<<(p==r==q)<<endl;
    return 0;
}