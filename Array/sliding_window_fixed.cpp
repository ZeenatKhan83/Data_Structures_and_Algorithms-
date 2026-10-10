#include<iostream>
using namespace std;
int main(){
	int n, k;
	cout<<"Enter size of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements of Array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter window size k: ";
	cin>>k;
	
	if(k<=0 || k>n){
		cout<<"Invalid window size."<<endl;
		return 0;
	}
	
	int windowSum = 0;
	for(int i=0; i<k; i++){
		windowSum += arr[i];
	}
	
	int maxSum = windowSum;
	
	for(int i=k; i<n; i++){
		windowSum = windowSum + arr[i] - arr[i-k];
		
		if(windowSum > maxSum){
			maxSum = windowSum;
		}
	}

	cout<<"Maximum sum : "<<maxSum<<endl;
	return 0;
}
