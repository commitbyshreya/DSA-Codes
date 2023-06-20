#include <iostream>
#include <vector>
using namespace std;

/*Given Q queries, check if the given element is present or not
Note: Value of all the elments in the array is less than 10 to the 
power 5
*/

int main()
{   int n;
    vector<int> v(n);
    cout<<"Entet the size of the vector: ";
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int N = 1e5 + 10;
    vector<int> freq(N,0);
    for(int i = 0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"Enter querries: ";
    int q;
    cin>>q;

    while(q--){
        cout<<"Enter querry elements: ";
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }

   return 0;
}