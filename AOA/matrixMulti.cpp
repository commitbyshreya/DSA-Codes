// #include <iostream>
// using namespace std;
// int dp[100][100];

// int MatrixChain(int* p, int i, int j){
// 	if(i==j){
// 		return 0; // same column same row (0,0), (1,1) .. = 0
// 	}
		
// 	if(dp[i][j] != -1){
// 		return dp[i][j];  //if result of subprob is precalculated then return it 
// 	}
// 	dp[i][j] = INT_MAX; // else if value is not precalculated then asign max

// 	for(int k = i; k<j;k++){
// 		dp[i][j] = min(
// 			dp[i][j], MatrixChain(p,i,k) 
// 			+ MatrixChain(p,k+1,j)
// 			+ p[i-1] * p[k] * p[j]
// 		);
// 	}
// 	return dp[i][j];
// }

// int MatrixChainOrder(int* p, int n){
// 	int i = 1, j = n-1;
// 	return MatrixChain(p,i,j);
// }

// int main() {
// 	   int arr[] = {4,10,3 ,12,20,7};
// 	   int n = 6;
// 	   memset(dp, -1, sizeof dp);

// 	   cout<<"Minimum number of multiplications is: " 
// 	   << MatrixChainOrder(arr,n);
// 	return 0;
// }


#include <iostream>
using namespace std;
int dp[100][100];


int matrixChain(int* p, int i, int j){

	if(i == j){
		return 0;
	}
	if(dp[i][j] != -1){
		return dp[i][j];
	}
	dp[i][j] = INT_MAX;
	
	for(int k = i; k<j;k++){
		dp[i][j] = min(
			dp[i][j] , matrixChain(p ,i , k)
			+ matrixChain(p, k+1, j)
			+ p[i-1] * p[k] * p[j]
		);
	}
	return dp[i][j];
}


int MatrixChainOrder(int* p, int n){
	int i = 1, j = n-1;
	return matrixChain(p,i,j);
}

int main() {
	   int arr[] = {4,10,3 ,12,20,7};
	   int n = 6;
	   memset(dp, -1, sizeof dp);
	    cout<<MatrixChainOrder(arr,n);

	return 0;
}