#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		int count = 0;
		
		for(int j=0; j<n; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>n/2){
			cout<<"Majority element: "<<arr[i]<<endl;
			return 0;
		}
	}
	
    cout<<"No Majority element."<<endl;
	return 0;
}
