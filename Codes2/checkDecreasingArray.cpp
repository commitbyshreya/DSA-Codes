#include <iostream>
#include <vector>
using namespace std;

int checkDecreasingArray(vector<int> &v, int n){}


int main()
{
    vector<int> v;
    cout << "enter length: ";
    int n;
    cin >> n;
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << checkDecreasingArray(v, n);
    return 0;
}