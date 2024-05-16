#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int key) {
    if (high >= low) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) 
            return mid;
        else if (key < arr[mid])  
            return binarySearch(arr, low, mid - 1, key);
        else 
            return binarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements to sort: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;
    int result = binarySearch(arr, 0, arr.size() - 1, key);
    if(result == -1){
        cout << "Key not found!";
    } else {
        cout << "Key found at index " << result;
    }
    return 0;
}
