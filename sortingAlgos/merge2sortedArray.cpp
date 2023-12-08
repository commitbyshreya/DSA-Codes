#include <iostream>
using namespace std;

void mergeArray(int *a1, int *a2, int n1, int n2){
	int i = 0;
	int j = 0;
	int ans[n1+n2]; int k=0;
	while(i<n1 && j<n2){
		int mini = min(a1[i],a2[j]);
		if(mini==a1[i]) ans[k++] = a1[i++];
		else ans[k++] = a2[j++];
	}
	while(i<n1){
		ans[k++] = a1[i++];
	}
	while(j<n2){
		ans[k++] = a2[j++];
	}
	for(int i =0 ;i<n1+n2;i++){
		cout<<ans[i]<<" ";
	}
}
int main()
{
	int a1[] = {5,8,10,11,12};
	int a2[] = {2,7,8};
	int n1= sizeof(a1)/sizeof(a1[0]);
	int n2= sizeof(a2)/sizeof(a2[0]);
	mergeArray(a1,a2,n1,n2);
	
   return 0;
}