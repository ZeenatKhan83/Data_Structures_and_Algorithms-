#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of Array: ";

  int arr[n];
  cout<<"Enter elements of array: "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  bool visited[i];
  for(int i=0; i<n; i++){
    visited[i] = false;
  }

  for( int i=0; i<n; i++){
    if(visited[i]){
      continue;
    }
  int count = 1;
  for(int j=i+1; j<n; j++){
    if(arr[i] == arr[j]){
      count++;
      visited[j] = true;
    }
  }
  cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
  }
return 0;
}
