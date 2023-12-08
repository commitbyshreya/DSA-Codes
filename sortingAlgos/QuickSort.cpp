#include <iostream>
using namespace std;

// Quick sort is NOT STABLE sort 
int partitionEle(int *arr,int f,int l){
	int pivot = arr[l]; int i = f-1;
	for(int j= f;j<l;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[l]);
	return i+1;
}

void QuickSort(int *arr,int f, int l){
	if(f>=l) return;
	int pi = partitionEle (arr,f,l);
	QuickSort(arr,f,pi-1);
	QuickSort(arr,pi+1,l);
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr,0,n-1);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
