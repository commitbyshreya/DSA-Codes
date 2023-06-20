#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum = num1 + num2;
    cout<<sum;
    return sum;
}

float add(float num1,float num2){
    float sum = num1 + num2;
    cout<<sum;
    return sum;
}

int add(int num1, int num2, int num3);
int main(){
    int num1,num2,num3;
    // float num1,num2;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    // add(num1,num2);
    add(num1,num2,num3);
    return 0;
}
int add(int num1,int num2,int num3){
    int sum = num1 + num2 + num3;
    cout<<sum;
    return sum;
}
/* built in functions in c++
pow(2,3) - power 2^3
sqrt(16) - square root
#include<cmath> - header file
*/