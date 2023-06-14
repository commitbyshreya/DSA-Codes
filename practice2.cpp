#include <iostream>
using namespace std;
int main()
{
    /*
    *****
    *  *
    * *
    * 
    */
    // int n = 7;
    // for(int i = 1;i<=n;i++){
    //     for(int j =1;j<=n;j++){
    //         if(i==1 || j==1){
    //             cout<<"*";
    //         }
    //         else if(j==((n-i)+1)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
        


    /*
    *****
     * *
      * 
    */
   int n = 4;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j = 1;j<=(2*i-1);j++){
            cout<<"*";
    }
    cout<<endl;
    
     int space = 0;
 
    // run loop (parent loop)
    // till number of rows
    for (int i = n-1; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";
 
        // Print i stars
        for (int j = 0;j < i;j++)
            cout << " *";
 
        cout << endl;
        space++;
    }
}

   }
 
   
