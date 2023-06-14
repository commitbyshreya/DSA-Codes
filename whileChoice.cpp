#include<iostream>
using namespace std;

int main(){
    int n,n1,sum;
    char choice;
    do{
        cout<<"Enter num1: ";
        cin>>n;
        cout<<"Enter num2: ";
        cin>>n1;
        sum = n + n1;
        cout<<sum<<endl;
        cout<<"Do you want to continue(y/n)? ";
        cin>>choice;

    }while(choice=='y' || choice=='Y');

    return 0;
}