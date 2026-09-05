#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int largest=arr[0], smallest=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Largest element of array: "<<largest<<endl;
	cout<<"Smallest element of array: "<<smallest<<endl;
	return 0;
}
