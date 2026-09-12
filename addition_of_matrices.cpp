#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter no. of rows: ";
	cin>>n;
	cout<<"Enter no. of columns: ";
	cin>>m;
	
	int a[n][m], b[n][m], sum[n][m];
	cout<<"Enter elements of matrix A:\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	cout<<"Matrix A:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
			cout<<endl;
	}
	
	cout<<"Enter elements of matrix B:\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>b[i][j];
		}
	}
	cout<<"Matrix B:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<b[i][j]<<" ";
		}
			cout<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			sum[i][j] = a[i][j] + b[i][j]; 
		}
	}
	cout<<"Addition of Matrices:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<sum[i][j]<<" ";
		}
			cout<<endl;
	}
	return 0;
}
