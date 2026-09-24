#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int Largest=arr[0];
	int secondLargest=arr[0];
	
	for(int i=1; i<n; i++){
		if(Largest < arr[i]){
			secondLargest = Largest;
			Largest = arr[i];
		}
		else if (arr[i] > secondLargest && arr[i] != Largest){
			secondLargest = arr[i];
		}
	}
	cout << "Largest: " << Largest << endl;
    cout << "Second Largest: " << secondLargest << endl;

    return 0;
}
