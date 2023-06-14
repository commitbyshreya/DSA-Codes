#include<iostream>
using namespace std;

int main(){
   char name;
   cout<<"Enter an alphabet: ";
   cin>>name;
   if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u'){
    cout<<"It is a vowel";
   }
   else{
    cout<<"It is a consonent";
   }
//    switch (name)
//    {
//    case 'a':
//    cout<<"It is a vowel";
//     break;
//    case 'e':
//    cout<<"It is a vowel";
//     break;
//    case 'i':
//    cout<<"It is a vowel";
//     break;
//    case 'o':
//    cout<<"It is a vowel";
//     break;
//    case 'u':
//    cout<<"It is a vowel";
//     break;
   
//    default:
//    cout<<"It is a consonant";
//     break;
//    }
   
   return 0;
}