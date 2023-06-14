#include<iostream>
using namespace std;

//** Given numbers a,b find the odd numbers btwn them
bool isPrime(int num){
    for(int i = 2; i*i <= num;i++){
        if(num%i==0) { return false;}
    }
    cout<<num<<" ";
    return true;
}
int main(){
    int a,b;
    cout<<"Enter num: ";
    cin>>a;
    cout<<"Enter num: ";
    cin>>b;
    for(int i = a; i <= b; i++){
        isPrime(i);
    }
    return 0;
}

// int main(){
    //Prime numbers
    // int num;
    // cout<<"enter number: ";
    // cin>>num;
    //**SOLUTION 1**
    // if(num==2 || num==3 || num==1){
    //     cout<<"It is a prime number";
    // }
    // else if(num%2==0 || num%3==0 || num%11==0){
    //     cout<<"It is not a prime number";
    // }
    // else{
    //     cout<<"It is a prime number";
    // }

    //**SOLUTION 2**
//     int count = 0;
//     // int i = 1;
//     // while(i<=num){
//     //     if(num%i==0){
//     //         count++;
//     //     }
//     //     i++;
//     // }

//     //**SOLUTION 3**
//     for(int i =1; i<=num;i++){
//         if(num%i==0){
//             count++;
//             cout<<count<<" ";
//         }
//     }
//     if(count==2){
//         cout<<num<<" has only 2 factor. IT IS A PRIME NUMBER";
//     }
//     else{
//         cout<<num<<" are factors of " <<num<< ". IT IS NOT A PRIME NUMBER";
//     }
//     return 0;
// }

