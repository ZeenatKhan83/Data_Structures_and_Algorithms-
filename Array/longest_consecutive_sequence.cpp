#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Array: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int longest = 1;
	
	for(int i=0; i<n; i++){
	int count = 1;
	int current = arr[i];
	
	while(true){
		bool found = false;
		for(int j=0; j<n; j++){
			if(arr[j] == current+1){
				found = true;
				current++;
				count++;
				break;
			}
		}
		if(!found){
			break;
		}
	}
		if(count>longest){
			longest = count;
		}
 	}
	cout<<"Longest consecutive sequence length: "<<longest<<endl;
	return 0;
}
