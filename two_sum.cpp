#include<iostream>
using namespace std;
int main(){
	int n, target;
		cout<<"Enter size of array: ";
		cin>>n;
		
		int arr[n];
		cout<<"Enter elements of array: ";
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		cout<<"Target: ";
		cin>>target;
		
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if( arr[i] + arr[j] == target){
					cout<<"Pair found: "<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
					return 0;
				}
			}
		}
		cout<<"No pair found.";
		return 0;
}
