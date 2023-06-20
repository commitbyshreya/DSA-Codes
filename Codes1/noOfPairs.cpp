#include <iostream>
using namespace std;

void noOfPairs(int arr[],int n,int x){
    int i = 0, j = n -1,pairs = 0;
    // bool flag = false;
    while(i <= j){
        if(arr[i] + arr[j] == x){
            // flag = true;
            pairs++5;
            i++;
            j--;
        }
        else if(arr[i] + arr[j]  < x){
            i++;
        }
        else{
            j--;
        }
        
    }
    // if(pairs > 0){
    //     cout<<"Yes. Total No. Of Pairs: "<<pairs;
    // }
    // else{
    //     cout<<"No Pairs found";
    // }
    cout<<pairs;
}
int main()
{
    cout<<"Enter size of the array: ";
    int n; cin>>n;
    int array[n];
    cout << "Enter elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int x;
    cout << "Enter x: ";
    cin >> x;
    noOfPairs(array,n,x);
   
    
    return 0;
}