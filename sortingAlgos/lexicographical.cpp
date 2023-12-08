#include <iostream>
using namespace std;

/* Q. sort in lexicographical order using selection sort*/
int main()
{
    char s[][60] = {"apple","appy","apaya","anupama"};
    int n = sizeof(s)/sizeof(s[0]);
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(strcmp(s[i],s[j]) > 0) {
                swap(s[i],s[j]);
            }
            /* strcmp(a,b);
                0 = equal;
                > 0 = a is greater 
                < 0 = b is greater
            */
            else {
                continue;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<s[i]<<" ";
    }
   return 0;
}