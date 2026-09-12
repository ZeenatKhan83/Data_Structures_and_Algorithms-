#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter no. of rows: ";
	cin>>n;
	cout<<"Enter no. of columns: ";
	cin>>m;
	
	int arr[n][m];
	cout<<"Enter elements of array:\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"2D array :"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
			cout<<endl;
	}
	return 0;
}
