#include <iostream>
using namespace std;
// Return element on the kth position 
int partitionEle(int *arr,int f,int l){
	int pivot = arr[l];
	int i = f;
	for(int j = f;j<l;j++){
		if(arr[j]<pivot){
			swap(arr[i],arr[j]);
			i++;
		}
	}
	swap(arr[i],arr[l]);
	return i;
}

int quickSort(int *arr, int f, int l,int k){
	if(k > 0 && k <= l-f+1) {
	int pivot = partitionEle(arr,f,l);
	if(pivot-f == k-1) return arr[pivot];
	else if(pivot-f > k-1) {
		return quickSort(arr,f,pivot-1,k);
	}
	else return quickSort(arr,pivot + 1,l,k-(pivot-f+1));
	
	}
	return INT_MAX;
}
int main()
{
	int arr[] = {3,5,2,1,4,7,8,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 5;
	cout<<quickSort(arr,0,n-1,k);
   return 0;
}