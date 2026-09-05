#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements' of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int left=0;
	int right=n-1;
	
	while(left<right){
		swap (arr[left], arr[right]);
		left++;
		right--;
	}
	
	cout<<"Reversed Array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
