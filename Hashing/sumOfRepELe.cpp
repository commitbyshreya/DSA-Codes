#include <iostream>
#include <map>
#include <vector>
using namespace std;

/* Q. Add repetitive keys. eg 1 1 2 3 3 
   -> 1 & 3 is repeating, hence 1 + 3 = 4*/
int main()
{
    int n; cin>>n;
    vector <int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    map <int,int> map1;
    for(int i = 0;i<n;i++){
        map1[v[i]]++;
    }

    int sum = 0;
    for(auto pairs: map1){
        if(pairs.second>1){
            sum += pairs.first;
        }
    }
    cout<<"Ans - "<<sum;
   return 0;
}