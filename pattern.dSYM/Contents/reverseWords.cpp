#include <iostream>
using namespace std;
// /*Q reverse words in a string*/
// void reversedString(int arr[],int n){

// }
int main()
{
    int n;
    cout<<"enter size of the array: ";
    cin>>n;
    cout<<"enter array char"<<endl;
    char a[n];
    n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    reverse(a, a + n);
    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    // reversedString(a,n);
   return 0;
}