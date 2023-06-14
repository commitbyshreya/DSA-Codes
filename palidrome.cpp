#include<iostream>
using namespace std;

int main(){
//PALIDROME
int i;
cout<<"enter a number: ";
cin>>i;
int num = i;
int rev = 0;

while(i>0){
    rev = (rev*10) + (i%10);
    i = i/10;
}
if(rev==num){
    cout<<"It is a palidrome";
}
else{
    cout<<"It is not a palidrome";
}

    return 0;
}